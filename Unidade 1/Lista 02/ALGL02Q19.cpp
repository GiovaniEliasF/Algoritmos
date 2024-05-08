/*
Algoritmos e Programacão
Lista 02 - Questão 19
"Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente 
ao dia. Considere que domingo é o dia 1 e sábado é o dia 7. "
*/

#include <iostream>
using namespace std;

int main() {
    
	int dia;

	cout << "Dia util ou Feriado?";
	cout << "\n1 - Domingo";
	cout << "\n2 - Segunda";
	cout << "\n3 - Terca";
	cout << "\n4 - Quarta";
	cout << "\n5 - Quinta";
	cout << "\n6 - Sexta";
	cout << "\n7 - Sabado";
	cout << "\nDigite o numero do dia:";
	cin >> dia;
	
	if (dia == 1 || dia == 7) {
		cout << "O dia Escolhido é um dia do Fim de Semana."; 
	} else {
		if (dia < 7 && dia > 1 ){
			cout << "O dia Escolhido e um dia Util.";
		} else {
			cout << "Erro: Opcao Invalida.";
		}
	}

	cout << '\n';
	system("pause");
    return 0;
}
