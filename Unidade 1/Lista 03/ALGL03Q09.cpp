/*
Algoritmos e Programacão
Lista 03 - Questão 09
"Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está 
em  um  ano  que  não  é  bissexto,  porém  considere  meses  de  28,  30  e  31.  O  resultado  deve  ser  como 
mostrado abaixo. Ex: janeiro, começando na 5a feira:"
*/

#include <iostream>
using namespace std;

int main() {
    
	int opcaoMes, opcaoDia, diaMaxMes, i, I;
	
	do {
	system ("cls");
	cout << "\tExibicao de Calendario\n";
	cout << "Escolha um mes: ";
	cin >> opcaoMes;
	cout << "1- Domingo\n";
	cout << "2- Segunda\n";
	cout << "3- Terca\n";
	cout << "4- Quarta\n";
	cout << "5- Quinta\n";
	cout << "6- Sexta\n";
	cout << "7- Sabado\n";
	cout << "Escolha um dia conforme a Tabela: ";
	cin >> opcaoDia;
	if (opcaoDia < 1 || opcaoDia > 7 || opcaoMes < 1 || opcaoMes > 12){
		cout << "Erro: Mes ou Dia Invalido, tente novamente.";
		system ("pause");
	}
	} while (opcaoDia < 1 || opcaoDia > 7 || opcaoMes < 1 || opcaoMes > 12);

	if (opcaoMes == 2){ //Limitando o Dia Maximo permitido de acordo com o Mês Escolhido
		diaMaxMes = 28;
	} else {
		if ((opcaoMes%2 == 1 && opcaoMes <= 7) || (opcaoMes%2 == 0 && opcaoMes >7)){
			diaMaxMes = 31;
		} else {
			diaMaxMes = 30;
		}
	}

	cout << "\n\nDom\tSeg\tTer\tQua\tQui\tSex\tSab\n";

	for (I = 1; I < opcaoDia; I++){ // Contador de Posição, enquando a posição não for igual ao número do dia inicial,
		cout << " \t";				// será adicionado o espacos, até que a posição seja igual a desejada.
	}
	for (i = 1; i <= diaMaxMes; i++) {	//Irá adicionar os numeros de cada dia até o dia Máximo Permitido por aquele Mês.
		cout << i << '\t';
		if (I%7 == 0){				// Se A posição que ele está percorrendo for divisivel por 7 (Sabado), quebra a Linha.
			cout << "\n";
		}
		I++;
	}

	cout << '\n';
	system("pause");
    return 0;
}