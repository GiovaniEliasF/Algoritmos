/*
Algoritmos e Programacão
Desafio 26/03/2024
"Elabore um algoritmo onde é lido um valor inicial e um valor final,
e de acordo com esses valores crie uma tabuada ate o 10, do menor valor
lido até o maior.
Ex.: 1 e 2
1x1 = 1		2x1 = 2
1x2 = 2		2x2 = 4
1x3 = 3		2x3 = 6
1x4 = 4		2x4 = 8
...			..."
*/

#include <iostream>
using namespace std;

int main() {
    int inicio, fim, multiplicador, auxInicioFim;
	cout << "Tabuada\n";
	cout << "Digite o valor inicial da Tabuada:";
	cin >> inicio;
	cout << "Digite o valor final da Tabuada:";
	cin >> fim;
	cout << '\n';

	if (inicio > fim){ // caso inicio seja maior que fim, os valores são invertidos
		auxInicioFim = fim;
		fim = inicio;
		inicio = auxInicioFim;
	}

	while (inicio <= fim ) {
		multiplicador = 1;
		while (multiplicador <= 10) {
			cout << inicio << " x " << multiplicador <<  " = " << multiplicador*inicio << '\n';
			multiplicador++;
		}
		cout << '\n';
		inicio ++;
	}
	cout << '\n';
	system("pause");
    return 0;
}
