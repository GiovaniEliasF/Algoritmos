/*
Algoritmos e Programacão
Lista 03 - Questão 02
"Crie  um  algoritmo  que  ajude  o  DETRAN  a  saber  o  total  de  recursos  que  foram  arrecadados  com  a 
aplicação  de  multas  de  trânsito.  
O  algoritmo  deve  ler  as  seguintes  informações  para  cada  um  dos  N motoristas: 
- O número da carteira de motorista (inteiro); 
- Número de multas; 
- O valor de cada uma das multas. 
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas. "
*/

#include <iostream>
using namespace std;

int main() {
    int nMotoristas, qtdMultas, maiorQtdMultas, codCNH, codCNHMaisMultas, iMotorista, iMulta;
	float valorMulta, somaMultasMotorista, somaMultas;
	system ("cls");

	do { 
		cout << "\tSistema de arrecadacao de recursos a partir de Multas - DETRAN";
		cout << "\n" << "Digite a quantidade de motoristas que serao cadastrados no sistema:";
		cin >> nMotoristas;
		if (nMotoristas < 1) {
			cout << "Quantidade de motoristas nao pode ser negativa" << "\n";
		}
	} while(nMotoristas < 1);
	
	somaMultas = 0;
	
	for (iMotorista = 1; iMotorista <= nMotoristas; iMotorista++){
		do {
			cout << "Digite o Numero da CNH do "<< iMotorista << "o motorista:";
			cin >> codCNH;
			if (codCNH < 1){
				cout << "Numero da CNH Invalido, digite novamente." << "\n";
			}
		} while (codCNH < 1);
		
		do{
			cout << "Digite a quantidades de multas que o motorista recebeu:";
			cin >> qtdMultas;
			if (qtdMultas < 0){
				cout << "Quantidade de multas invalida, digite novamente." << "\n";
			}
		}while(qtdMultas < 0);
		
		iMulta = 1; // indice da numeração da multa
		somaMultasMotorista = 0;
		system ("cls");

		if (iMotorista == 1){ 
			maiorQtdMultas = qtdMultas;
			codCNHMaisMultas = codCNH;
		}
		if (maiorQtdMultas < qtdMultas){
			maiorQtdMultas = qtdMultas;
			codCNHMaisMultas = codCNH;
		}
		
		for (iMulta = 1; iMulta <= qtdMultas; iMulta++) {
			do {
				cout << "Digite o valor da " << iMulta << "a multa: R$";
				cin >> valorMulta;
				if (valorMulta < 1){
					cout << "Valor da multa invalida, digite novamente." << "\n";
				}
			} while (valorMulta < 1);
			somaMultasMotorista += valorMulta;
		}
		cout << "A divida do Motorista de CNH: " << codCNH << " eh de R$" << somaMultasMotorista << "\n";
		somaMultas += somaMultasMotorista;
		system ("pause");
		system ("cls");
	}
	cout << "A quantidade de Recursos arrecadados eh de R$" << somaMultas << "\n";
	cout << "A CNH do Motorista com maior quantidade de Multas eh:" << codCNHMaisMultas << "\n"
		<< "E a quantidade de Multas que ele tem eh: " <<  maiorQtdMultas;
		
	cout << '\n';
	system("pause");
	system("cls");
    return 0;
}
