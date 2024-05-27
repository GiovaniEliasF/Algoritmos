/*
Algoritmos e Programacão
Lista 03 - Questão 13
"Elabore  um  algoritmo  que  leia  um  número  inteiro  qualquer  e  verifique  se  ele  é  quadrangular.  Se  for, 
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números 
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ... "
*/

#include <iostream>
using namespace std;

int main() {
    
	unsigned int numEntrada, i, aux, I;
	aux = 0;

	system("cls");
	cout << "Verificacao de numeros Quadrangulares.\n";
	cout << "Digite o Numero que deseja verificar:";
	cin >> numEntrada;
	for (i = 1; aux < numEntrada ; i++){
		aux = i*i;
		if (aux == numEntrada){
			i--;
		}
	}

	if (aux == numEntrada){
		cout << "O numero e quandrangular pois " << i << "x"<< i << " = " << aux ;
		cout << "\nOs 10 proximos quandrangulares sao:\n";
		i++;
		for (I = i; I <= i+10; I++) {
			cout << I << "*" << I << " = " << I*I << "\n";
		}
	} else {
		cout << "O numero inserido nao e quadrangular.";
	}

	cout << '\n';
	system("pause");
    return 0;
}