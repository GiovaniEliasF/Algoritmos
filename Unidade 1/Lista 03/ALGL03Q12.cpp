/*
Algoritmos e Programacão
Lista 03 - Questão 12
"O número 3025 possui a seguinte característica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia 
N  números  de  4  algarismos  e escreva a mensagem “positivo” se o número tiver essa característica e 
“negativo” se não tiver."
*/

#include <iostream>
using namespace std;

int main() {

	int numEntrada, part1, part2, part3;
	
	do {
		system("cls");
		cout << "O Numero tem a caracteristica desejada?\n";
		cout << "Digite um Numero com 4 Digitos:";
		cin >> numEntrada;
		if ((numEntrada < 1000 || numEntrada > 9999) && (numEntrada > -1000  || numEntrada < -9999)){
			cout << "Erro: Valor inserido nao possui 4 digitos.\n";
			system ("pause");
		}
	} while ((numEntrada < 1000 || numEntrada > 9999) && (numEntrada > -1000  || numEntrada < -9999));
    
	part1 = numEntrada/100;
	cout << part1 << " + ";
	part2 = numEntrada-part1*100;
	cout << part2 << " = ";
	part3 = part1+part2;
	cout << part3;
	cout << " e " << part3 << "*" << part3 << " = ";
	part3 = part3*part3;
	cout << part3;

	if (numEntrada == part3){
		cout << "\nPositivo."; 
	} else {
		cout << "\nNegativo.";
	}


	cout << '\n';
	system("pause");
    return 0;
}
