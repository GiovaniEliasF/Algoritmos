/*
Algoritmos e Programacão
Lista 03 - Questão 04
"Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores 
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 
é perfeito, pois 1+2+3 = 6."
*/

#include <iostream>
using namespace std;

int main() {
    int N, i, soma ;
	soma = 0;
	
	do {
	cout << "Validacao de Numero Perfeito \n";
	cout << "Digite o Numero que deseja verificar: ";
	cin >> N;
	if ( N < 0 ) {
		cout << "Por favor digite um valor positivo.";
	}
	} while (N < 0); 

	for (i = 1; soma < N; i++){
		soma += i;
	}

	if (soma == N){
		cout << N << " E um numero perfeito.";
	} else {
		cout << N << " Nao e um numero perfeito.";
	}

	cout << '\n';
	system("pause");
    return 0;
}