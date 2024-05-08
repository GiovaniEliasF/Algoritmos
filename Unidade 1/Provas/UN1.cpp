#include <iostream>
using namespace std;

int  main(){

	int opG, opR, opE, senha, cpf, senhaCorreta, qtdLogin, i;
	float estoqueTotal, estoqueAtual, diferenca, menorDecremento, somaRacoesManipuladasEstoquista;
	int qtdDecrementos, maiorQtdDecrementos, qtdAtualizacoesEstoquista, somaQtdTotalAtualizacoes, qtdAtualizacoes;
	int cpfMaiorQtdDecrementos;
	int gatos, caes, aves, peixes, outros;
	char usuario;
	bool flagUsuarioValido, flagAves, flagPrimeiroDecremento, flagPrimeiroLogin;

	qtdLogin = 0;
	senhaCorreta = 99999;
	maiorQtdDecrementos = 0;
	somaQtdTotalAtualizacoes = 0;
	flagPrimeiroDecremento = true;
	flagAves = false;
	flagPrimeiroLogin = true;
	
	do { //Sistema
		do{ // Menu de Login
			system ("cls");
			cout << "\tBem vindo a Loja VendemosRacoesNoPeso.com\n";
			cout << "Digite seu CPF: ";
			cin >> cpf;
			cout << "Digite seu Usuario: ";
			cin >> usuario;
			cout << "Digite a senha: ";
			cin >> senha;
			if ((usuario == 'e') || (usuario == 'E') || (usuario == 'g') || (usuario == 'G')){
				flagUsuarioValido = true;
			} else {
				flagUsuarioValido = false;
			}
			if (!flagUsuarioValido || senha != senhaCorreta){
				cout << "Credenciais incorretas, tente novamente.\n";
				system ("pause");
			}
		} while (senha != senhaCorreta || !flagUsuarioValido);
		if (usuario == 'e' || usuario == 'E'){ // Usuario Estoquista Logado
			qtdLogin++;
			qtdAtualizacoesEstoquista = 0;
			qtdDecrementos = 0;
			somaRacoesManipuladasEstoquista = 0;
			gatos = caes = aves = peixes = outros = 0; // Zerando a quantidade de manipulacoes de cada tipo de racao
			do{ // Sistema Estoquista

				do { 	//Menu de opções do Estoquista
					system ("cls");
					cout << "\tMenu Estoquista\n";
					cout << "-------------------------------\n";
					cout << "1- Atualizar Estoque\n";
					cout << "2- Informar Estoque Atual\n";
					cout << "3- Logoff Estoquista\n";
					cout << "-------------------------------\n";
					cout << "Selecione uma opcao: ";
					cin >> opE;
					if (opE < 1 || opE >3){
						cout << "Opcao inexistente, tente novamente. \n";
						system ("pause");
					}

				} while (opE < 1 || opE > 3 );
				switch (opE){ // Escolhas possiveis para o Menu do Estoquista
					case 1: 		// Opção 1: Atualização do Estoque
						do {				// Entrada da quantidade de atualizações realizadas pelo Estoquista
							system ("cls");
							cout << "Digite quantas Atualizacoes Deseja Realizar: ";
							cin >> qtdAtualizacoes;
							if (qtdAtualizacoes < 1){
								cout << "Quantidade de Atualizacoes Invalida\n";
								system ("pause");
							}

						} while(qtdAtualizacoes < 1);
						for (i = 1; i <= qtdAtualizacoes; i++) {
							do { 				// Menu de opções de Racoes
								system ("cls");
								cout << "\nDigite a " << i << "a Atualizacao\n\n";
								cout << "\tMenu Racoes\n";
								cout << "-----------------------------\n";
								cout << "1- Para Gatos\n";
								cout << "2- Para Caes\n";
								cout << "3- Para Aves\n";
								cout << "4- Para Peixes\n";
								cout << "5- Outros\n";
								cout << "-----------------------------\n";
								cout << "Selecione a opcao desejada: ";
								cin >> opR;
								if (opR < 1 || opR > 5){
									cout << "Opcao inexistente, tente novamente\n";
									system ("pause");
								}
								switch (opR){ // Escolhas possiveis para o Menu de Racoes
									case 1:
										gatos++;
										break;
									case 2:
										caes++;
										break;
									case 3:
										aves++;
										flagAves = true;
										break;
									case 4:
										peixes++;
										break;
									case 5:
										outros++;
										break;
								}
								cout << "Digite o Valor do Estoque Atual em Kg: ";
								cin >> estoqueAtual;
								if (qtdLogin == 1 && flagPrimeiroLogin){ // Se for o Primeiro login, O a atualizaçao será o valor inicial do estoque
									flagPrimeiroLogin = false;
									estoqueTotal = estoqueAtual;
									diferenca = 0;
								} else {
									diferenca = estoqueAtual - estoqueTotal; // Se nao for o primeiro login, calcule a diferenca entre o estoque total e o atual
								}
								if (diferenca < 0 ) { 	// Se o valor atual for menor que o anterior, contabiliza um decremento
									diferenca = diferenca*(-1);
									qtdDecrementos++;
									estoqueTotal -= diferenca;
									if (qtdDecrementos == 1 && flagPrimeiroDecremento){ // Se esse é o primeiro decremento do sistema, Guarda a diferenca como a menor
										flagPrimeiroDecremento = false;
										menorDecremento = diferenca;
										cout << "Menor dec " << menorDecremento;
									}
									
									if (menorDecremento > diferenca) { // Se esse decremento for menor que o menor decremento regisrado, esse é o menor decremento
										menorDecremento = diferenca;
										cout << "Menor dec " << menorDecremento;
									}
									
									if (qtdDecrementos > maiorQtdDecrementos){ // Guarda o maior valor de decrementos e o CPF
									maiorQtdDecrementos = qtdDecrementos;
									cpfMaiorQtdDecrementos = cpf;
									}
									
								} else {
									estoqueTotal += diferenca;
								}
								somaRacoesManipuladasEstoquista += estoqueTotal;				
							} while (opR < 1 || opR > 5);
						}
						qtdAtualizacoesEstoquista += qtdAtualizacoes;
						break;
					case 2:			//Opção 2: Mostrar quantidade absoluta de Rações manipuladas
						cout << "Voce ja manipulou um total de " << somaRacoesManipuladasEstoquista << "Kg de Racao\n";
						system("pause");
						break;
					case 3: 
						somaQtdTotalAtualizacoes += qtdAtualizacoesEstoquista;
						cout << "\tForam Manipuladas";
						cout << "\nRacoes de Gato " << gatos << " Vezes";
						cout << "\nRacoes de Caes " << caes << " Vezes";
						cout << "\nRacoes de Aves " << aves << " Vezes";
						cout << "\nRacoes de Peixes " << peixes << " Vezes";
						cout << "\nOutros Tipos de Racoes " << outros << " Vezes \n";
						system ("pause");
				}
				
			} while(opE != 3);
			
		} else { // Usuario Gerente Logado
			
			do { // Sistema Gerente
				do { // Menu Gerente
					system ("cls");
					cout << "\tMenu Gerente\n";
					cout << "------------------------\n";
					cout << "1- Analise de Racoes\n";
					cout << "2- Maiores Decrementos\n";
					cout << "3- Alterar Senha\n";
					cout << "4- Finalizar o Sistema\n";
					cout << "------------------------\n";
					cout << "Selecione a opcao desejada: ";
					cin >> opG;
					if (opG < 1 || opG > 4){
						cout << "Opcao Inexistente, tente novamente.";
					}
				} while (opG < 1 || opG > 4);
				
				switch (opG) { // Opções Gerente
				case 1:
					if (qtdLogin == 0){
						cout << "Nao foram feitas nenhuma alteracao no sistema.";
					} else {
						cout << "A media de alteracoes no Estoque eh de: " << somaQtdTotalAtualizacoes/qtdLogin << "Alteracoes Por estoquista.\n";
					}
					system ("pause");
					break;
				case 2:
				if (qtdLogin == 0){
						cout << "Nao foram feitas nenhuma alteracao no sistema.\n";
					} else {
						cout << "Menor Valor de Decremento foi: " << menorDecremento << " Kg\n";
						cout << "O CPF do estoquista com maior quantidade de Decrementos foi: " << cpfMaiorQtdDecrementos << "\n";
					}
					system ("pause");
					break;
				case 3:
					do { // Opcao 3: Mudar Senha
						cout << "Digite a nova senha:";
						cin >> senhaCorreta;
						if (senhaCorreta < 10000 || senhaCorreta > 99999){
							cout << "\nErro: Senha nao atende aos criterios desejados";
							system ("pause");
							system ("cls");
						}
					} while (senhaCorreta < 10000 || senhaCorreta > 99999);
					cout << "Sua senha foi alterada com sucesso.\n";
					system ("pause");
					break;
				case 4:
					cout << "Fim do sistema.\n";
					if (flagAves){
						cout << "Foram Feitas alteracoes nas racoes de Aves.";
					} else {
						cout << "Nao foram feitas alteracoes nas racoes de Aves.";
					}
					break;
				}
			} while (opG != 4);
		}
	} while (opG != 4);
}