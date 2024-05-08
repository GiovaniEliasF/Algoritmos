/*
Algoritmos e Programacão
Lista 03 - Questão 01
"Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da 
pessoa mais velha e a idade da pessoa mais nova."
*/

#include <iostream>
using namespace std;

int main() {
    int idade, codigo, i, menorIdade, maiorIdade, codMaisVelho;

	for (i = 1; i <= 100; i++) {
		do {
			cout << "Digite o codigo da " << i << "a pessoa:";
			cin >> codigo;
			cout << "Digite a idade da " << i << "a pessoa:";
			cin >> idade;
			if (i == 1){
				maiorIdade = idade;
				menorIdade = idade;
				codMaisVelho = codigo;
			}
			if (idade < 0 || codigo < 0){
				cout << "Dados inseridos sao negativos, digite novamente. \n";
			}
		} while (idade < 0 || codigo < 0);
		
		if (idade > maiorIdade){
			codMaisVelho = codigo;
		}
		if (idade < menorIdade) {
			menorIdade = idade;
		}
	}

	cout << "O codigo da pessoa mais velha eh: " << codMaisVelho << ".";
	cout << "\nA Idadde da pessoa mais nova eh:" << menorIdade << "."; 

	cout << '\n';
	system("pause");
    return 0;
}
