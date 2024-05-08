/*
Algoritmos e Programacão
Lista 03 - Questão 03
"Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
maior que Chico. "
*/

#include <iostream>
using namespace std;

int main() {
    int chico, juca, anos;
	cout << "Chico tem 1,50m e cresce 2 centimetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano";
	juca = 110;
	anos = 0;
	for (chico = 150; chico >= juca; chico+=2){
		anos++;
		juca += 3;
	}
	cout << "\nJuca alcancara Chico em  " << anos << " anos.";

	cout << '\n';
	system("pause");
    return 0;
}
