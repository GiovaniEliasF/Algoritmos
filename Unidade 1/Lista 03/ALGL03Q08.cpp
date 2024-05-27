/*
Algoritmos e Programacão
Lista 03 - Questão 08
"Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte 
maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa 
do  tabuleiro  tivesse  um  grão,  e  as  casas  seguintes  o  dobro  da  anterior.  Considere  que  o  tabuleiro  de 
xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e 
assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar 
ao monge a partir da leitura do número da casa desejada. "
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    
	unsigned long long graos;
	short int casaInicial, i;

	system ("cls");
	cout << "\tTabuleiro de Xadrez.\n";

	/* Tabuleiro Manual
	cout << " 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 \n";
	cout << "_______________________________________\n";
	cout << " 09 | 10 | 11 | 12 | 13 | 14 | 15 | 16 \n";
	cout << "_______________________________________\n";
	cout << " 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 \n";
	cout << "_______________________________________\n";
	cout << " 25 | 26 | 28 | 29 | 30 | 31 | 32 | 32 \n";
	cout << "_______________________________________\n";
	cout << " 33 | 34 | 35 | 36 | 37 | 38 | 39 | 40 \n";
	cout << "_______________________________________\n";
	cout << " 41 | 42 | 43 | 44 | 45 | 46 | 47 | 48 \n";
	cout << "_______________________________________\n";
	cout << " 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 \n";
	cout << "_______________________________________\n";
	cout << " 57 | 58 | 59 | 60 | 61 | 62 | 63 | 64 \n";
	*/

	for (i = 1; i <= 64 ; i ++) { // Tabuleiro com For
		if (i%8 != 0){
			if ( i < 10) {
				cout << " 0";
			} else {
				cout << " " ;
			}
			cout << i << " |";
		} else {
			if (i == 8 ){
				cout << " 0";
			} else {	
				cout << " ";
			}
			cout << i << "\n";
			if (i != 64) {
				cout << "_______________________________________\n";
			}
		}
		
	}
	
	do { // Entrada do Numero onde inicia a contagem
	cout << "\nCom base na Explicacao do Encunciado, escolha a casa na qual deseja comecar: ";
	cin >> casaInicial;
	if (casaInicial <= 0 || casaInicial > 64) {
		cout << "Erro: Digite um valor entre a faixa de casas do tabuleiro.\n";
		system ("pause");
		system ("cls");
	}
	} while (casaInicial <= 0 || casaInicial > 64);

	graos = 1; 
	for (i = casaInicial; i<= 64 ; i++) {
		graos = graos*2;
		i++;
	}

	cout << "A quantidade de graos recebida pelo monge eh de: " << graos << " graos.";


	cout << '\n';
	system("pause");
    return 0;
}