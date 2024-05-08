/*
Algoritmos e Programacão
Lista 02 - Questão 17
"Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo 
de 10; se for ímpar, escreva se é divisível por 5."
*/

#include <iostream>
using namespace std;

int main() {
    int n;
	cout << "Verificacao de Numero";
	cout << "\nDigite o numero a ser testado:";
	cin  >> n;

	if (n%2 == 0){
		if (n%10 == 0){
			cout << "O seu Numero eh Par e multiplo de 10.";
		} else {
			cout << "O seu Numero eh Par e nao eh multiplo de 10.";
		}
	} else {
		if (n%2 != 0 ){
			if (n%5 == 0){
				cout << "O seu Numero eh impar e divisivel por 5.";
			} else {
				cout << "O seu numero eh Impar e nao eh divisivel por 5.";
			}
		}
	}

	cout << '\n';
	system("pause");
    return 0;
}
