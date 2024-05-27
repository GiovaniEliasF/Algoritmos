/*
Algoritmos e Programacão
Lista 03 - Questão 10
"Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva 
uma  tabela  de  resultados  (formatada  com  linhas  verticais  e  horizontais).  A  tabela  deverá  conter  cada 
valor  lido  em  uma  coluna,  seu  quadrado  (na  segunda  linha)  e  seu  cubo  (na  terceira  linha).  Finalizar  a 
entrada  de  dados  quando  os  4  valores  digitados  forem  iguais  a  zero.  Se  for  digitado  algum  número 
negativo, solicitar que o usuário digite novamente até que o número seja positivo. "
*/

#include <iostream>
using namespace std;

int main() {
	float valor1, valor2, valor3, valor4, valorAbsoluto;
	int i;
	bool encerrar;
	encerrar = false;

	while (!encerrar) {
		system("cls");
		cout << "\tTabela de Calculo de Quadrados e Cubos.\n";
		for (i = 1; i <= 4; i++) {
			do {
				switch (i) {
				case 1:
					cout << "Digite o "<< i << "o. Numero:";				
					cin >> valor1;
					valorAbsoluto = valor1;
					break;
				case 2:
					cout << "Digite o "<< i << "o. Numero:";
					cin >> valor2;
					valorAbsoluto = valor2;
					break;
				case 3:
					cout << "Digite o "<< i << "o. Numero:";
					cin >> valor3;
					valorAbsoluto = valor3;
					break;
				case 4:
					cout << "Digite o "<< i << "o. Numero:";
					cin >> valor4;
					valorAbsoluto = valor4;
					break;				
				}
				if (valorAbsoluto < 0){
					cout << "Erro: Valor Inserido e Negativo.\n";
				}
			} while (valorAbsoluto < 0);
		}
		
		if (valor1 == valor2 && valor1 == valor3 && valor1 == 0){
			encerrar = true;
			cout << "Sistema Finalizado.";
		} else {
			cout << "Tabela\n";
			cout << "Valores:\t" << valor1 << "\t" << valor2 << "\t" << valor3 << "\t" << valor4 << "\n";
			cout << "Quadrados:\t" << valor1*valor1 << "\t" << valor2*valor2 << "\t" << valor3*valor3 << "\t" << valor4*valor4 << "\n";
			cout << "Cubos:\t\t" << valor1*valor1*valor1 << "\t" << valor2*valor2*valor2 << "\t" << valor3*valor3*valor3 << "\t" << valor4*valor4*valor4 << "\n";
			system("pause");
		}
	}
	cout << '\n';
	system("pause");
    return 0;
}
