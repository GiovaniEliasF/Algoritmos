#include<iostream>
using namespace std;
int main(){
	int senhaSistema = 1111, matricula, senha, opMenuC, qtd, alvo, cont, cargaAlvo1, cargaAlvo2, cargaAlvo3, cargaAlvo4, cargaAlvo5, opMenuA;
	int qtdExercicios = 0, qtdSessoes = 0, qtdDecrementos, menor = -1, matMenor; 
	char tipoU;
	float carga, acumDec, cargaAnterior, cargaTotal, media = 0, maior = 0;
	bool inicio = true;
	
	while(inicio){
		do{
			system("cls");
			cout << "\n\tBem-vindo a Academia EuMalhoAsVezes.com";
			cout << "\n\n\tInforme o tipo de usuario (C-Cliente ou A-Administrador): ";
			cin >> tipoU;
			cout << "\n\tInforme a matricula: ";
			cin >> matricula;
			cout << "\n\tInforme a senha: ";
			cin >> senha;
			
			if((((tipoU!='C')&&(tipoU!='c')&&(tipoU!='A')&&(tipoU!='a')) || ((senha<1000)||(senha>9999))) || (senha!=senhaSistema)){
				cout << "\n\tInformacoes invalidas, sessao nao iniciada\n\t";
				system("pause");
			}else{
				cout << "\n\tSessao iniciada com sucesso\n\t";
				system("pause");
			}
			
			//validação da senha
			
		}while((((tipoU!='C')&&(tipoU!='c')&&(tipoU!='A')&&(tipoU!='a')) || ((senha<1000)||(senha>9999))) || (senha!=senhaSistema));
		
		
		switch(tipoU){
			case 'c':
			case 'C': //usuário logado: cliente
				qtdSessoes++;
				cargaTotal = 0;
				cargaAlvo1 = cargaAlvo2 = cargaAlvo3 = cargaAlvo4 = cargaAlvo5 = 0;
				qtdDecrementos = 0;
				do{
					//zerar acumDec
					acumDec = 0;
					cout << "\n\tMenu Cliente";
					cout << "\n\t------------------------------";
					cout << "\n\t1 - Exercicios por Alvo";
					cout << "\n\t2 - Informar Carga Atual";
					cout << "\n\t3 - Logoff do Cliente";
					cout << "\n\t-------------------------------";
					cout << "\n\tEscolha a opcao desejada: ";
					cin >> opMenuC;
					
					switch(opMenuC){
						case 1: cout << "\n\n\tQual a quantidade de exercicios que deseja realizar? ";
							cin >> qtd;
							qtdExercicios = qtdExercicios + qtd;
							cargaAnterior = 0;
							for(cont=1; cont<=qtd; cont++){
								cout << "\n\tAlvos";
								cout << "\n\t------------------";
								cout << "\n\t1 - Inferiores";
								cout << "\n\t2 - Superiores";
								cout << "\n\t3 - Abdomen";
								cout << "\n\t4 - Costas";
								cout << "\n\t5 - Outros";
								cout << "\n\t------------------";
								cout << "\n\tQual o alvo desejado? ";
								cin >> alvo;
								cout << "\n\tQual a carga em kg? ";
								cargaAnterior = carga;
								cin >> carga;
								cargaTotal += carga;
								
								//decremento de carga
								if(carga<cargaAnterior){
									acumDec = acumDec + (cargaAnterior - carga);
									qtdDecrementos++;
								}
								if((cargaAnterior - carga)>maior){
									maior = (cargaAnterior - carga);
								}
								
								if(alvo==1){
									cargaAlvo1 += carga;
								}else{
									if(alvo==2){
										cargaAlvo2 += carga;
									}else{
										if(alvo==3){
											cargaAlvo3 += carga;		
										}else{
											if(alvo==4){
												cargaAlvo4 += carga;	
											}else{
												if(alvo==5){
													cargaAlvo5 += carga;				
												} 
											}
										}
									}
								}
							}
								
							break;
						case 2: cout << "\n\tCarga total ate o momento: " << cargaTotal;
							break;
						case 3: cout << "\n\tCarga total alvo 1 (inferiores): " << cargaAlvo1;
							cout << "\n\tCarga total alvo 2 (superiores): " << cargaAlvo2;
							cout << "\n\tCarga total alvo 3 (abdomen): " << cargaAlvo3;
							cout << "\n\tCarga total alvo 4 (costas): " << cargaAlvo4;
							cout << "\n\tCarga total alvo 5 (outros): " << cargaAlvo5;
							inicio = true; //para voltar para o começo - Tela de Login
							cout << "\n\n\tVoltando para o inicio...\n\t";
							//verificar se o decremento deste cliente foi o menor decremento até aqui
							if((qtdDecrementos<menor)||(menor==-1)){ //se menor == -1, eh o primeiro cliente pois -1 está sendo utilizando como flag
								menor = qtdDecrementos;
								matMenor = matricula;
							}
							break;
						default: cout << "\n\tOpcao invalida";
					}
				} while(opMenuC!=3);
				break;
			case 'a':
			case 'A': //usuário logado: administrador
				do{
					cout << "\n\tMenu Administrador";
					cout << "\n\t-------------------------------";
					cout << "\n\t1 - Análise de Exercícios";
					cout << "\n\t2 - Maiores Decrementos";
					cout << "\n\t3 - Alterar senha";
					cout << "\n\t4 - Finalizar o Sistema";
					cout << "\n\t-------------------------------";
					cout << "\n\tEscolha a opcao desejada: ";
					cin >> opMenuA;
					switch(opMenuA){
						case 1: //média aritmética (total de exercícios realizados / total de clientes ou sessões)
							media = qtdExercicios/(float)qtdSessoes;
							cout << "\n\tMedia Aritmetica = " << media;
							break;
						case 2: cout << "\n\tMaior valor de decremento de carga: " << maior;
							cout << "\n\tMatricula do cliente com a menor quantidade de decrementos: " << matMenor;
							break;
						case 3: 
							do{
								cout << "\n\tDigite a nova senha de 4 digitos: ";
								cin >> senhaSistema;
							}while((senhaSistema<1000)||(senhaSistema>9999));
							cout << "\n\tNova senha do sistema: " << senhaSistema;
							break;
						case 4: 
						default: inicio = false; //para NÃO voltar para o começo - Tela de Login 
					}
				}while(inicio);
				break;
			default: cout << "\n\tOpcao invalida";		
		}
		cout << "\n\t";
		system("pause");
	} // laco de voltar para o inicio
	
	cout << "\n\tFim de sistema";
	
	
}
