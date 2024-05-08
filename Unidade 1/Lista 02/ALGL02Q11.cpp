/*
Algoritmos e Programacão
Lista 02 - Questão 11
"Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique 
e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 + 1). 
Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número inválido”."
*/

#include <iostream>
using namespace std;

int main() {
    int N, soma;
	cout << "Calculadora de decomposicao e soma de termos";
	cout << "\nDigite um numero Inteiro:";
	cin >> N;
	if (N > 0 && N < 10000 ) {
		soma = N/1000;
		cout << N/1000 << " + ";
		N = N%1000;
		soma = soma + N/100;
		cout << N/100 << " + ";
		N = N%100;
		soma = soma + N/10;
		cout << N/10 << " + ";
		N = N%10;
		soma = soma + N;
		cout << N << " = " << soma;
		cout << "\nA soma dos termos eh: " << soma;
	} else {
		cout << "Erro: Numero inserido eh invalido";
	}
	cout << '\n';
	system("pause");
    return 0;
}
