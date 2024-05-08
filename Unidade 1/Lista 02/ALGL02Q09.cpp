/*
Algoritmos e Programacão
Lista 02 - Questão 09
"Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
escreva-os na ordem solicitada."
*/

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3, crescente, decrescente, opA, opB, opC;
	char escolha;
	cout << "Exibição de numeros em Ordem Crescente ou Descrescente\n";
	cout << "Digite o Primeiro Numero:";
	cin >> numero1;
	cout << "Digite o Segundo Numero:";
	cin >> numero2;
	cout << "Digite o Terceiro Numero:";
	cin >> numero3;
	cout << "Digite ''c'' para Crescente ou ''d'' para Decrescente:";
	cin >> escolha;


	if (numero1 - numero2 > 0) {
		opA = 1; //Numero1 é maior que Numero2 e menor que Numero3 
		if (numero1 - numero3 > 0){
			opA = 2; //Numero1 é maior que todos
		}
	} else { 
		if (numero1 - numero3 > 0){
			opA = 3; //Numero1 é maior que Numero3 e menor que Numero2
		}
	}
	if (numero1 == numero2 && numero1 == numero3){
		opA = 4; //Todos Numeros são iguais
	} else {
		if (numero1 == numero2){
			opA = 5; //Numero1 é igual a Numero2
		} else {
			if (numero1 == numero3) {
				opA = 6; //Numero1 é igual a Numero 3 
			} else {
				if (numero1 < numero2 && numero1 < numero3){
					opA = 7; //Numero1 é menor que todos;
				}
			}
		}
	}
	
	if (numero2 - numero1 > 0) {
		opB = 1; //Numero2 é maior que Numero1 e menor que Numero3 
		if (numero2 - numero3 > 0){
			opB = 2; //Numero2 é maior que todos
		}
	} else { 
		if (numero2 - numero3 > 0){
			opB = 3; //Numero2 é maior que Numero3 e menor que Numero1
		}
	}
	if (numero1 == numero2 && numero1 == numero3){
		opB = 4; //Todos Numeros são iguais
	} else {
		if (numero2 == numero1){
			opB = 5; //Numero2 é igual a Numero1
		} else {
			if (numero2 == numero3) {
				opB = 6; //Numero2 é igual a Numero 3
			} else {
				if (numero2 < numero1 && numero2 < numero3){
					opB = 7; //Numero2 é menor que todos;
				}
			}
		}
	}
	
	if (numero3 - numero2 > 0) {
		opC = 1; //Numero3 é maior que Numero2 e menor que Numero1 
		if (numero3 - numero1 > 0){
			opC = 2; //Numero3 é maior que todos
		}
	} else {
		if (numero3 - numero1 > 0){
			opC = 3; //Numero3 é maior que Numero1 e menor que Numero2
		}
	}
	if (numero1 == numero2 && numero1 == numero3){
		opC = 4; //Todos Numeros são iguais
	} else {
		if (numero3 == numero2){
			opC = 5; //Numero3 é igual a Numero2
		} else {
			if (numero3 == numero1) {
				opC = 6; //Numero3 é igual a Numero1
			} else {
				if (numero3 < numero2 && numero3 < numero1){
					opC = 7; //Numero3 é menor que todos;
				}
			}
		}
	}
	
	cout << "A:" << opA << " B:" << opB << " C:" << opC << '\n';

	switch (escolha) {
	case 'd':
		switch (opA) {
		case 1:
			cout << numero3 << " > " << numero1 << " > " << numero2 ;
			break;
		case 2: 
			if (opB == 3) {
					cout << numero1 << " > " << numero2 << " > " << numero3; 
				} else {
					if (opB == 7){
						cout << numero1 << " > " << numero3 << " > " << numero2;
					} else {
						cout << numero1 << " > " << numero3 << " = " << numero2;
					} 
				}
			break;
		case 3:
			cout << numero2 << " > " << numero1 << " > " << numero3 ;
			break;
		case 4:
			cout << "Todos os Numeros sao iguais";
			break;
		case 5:
			if (opC == 2){
				cout << numero3 << " > " << numero2 << " = " << numero1;
			} else {
				cout << numero1 << " = " << numero2 << " > " << numero3;
			}
			break;
		case 6:
			if (opB == 2){
				cout << numero2 << " > " << numero1 << " = " << numero3;
			} else {
				cout << numero1 << " = " << numero3 << " > " << numero2;
			}
			break;
		case 7:
			switch (opB) {
			case 1:
				cout << numero3 << " > " << numero2 << " > " << numero1;
				break;
			case 2:
				cout << numero2 << " > " << numero3 << " > " << numero1;
				break;
			case 6:
				cout << numero2 << " = " << numero3 << " > " << numero1;
				break;
			default:
				cout << "\nComo vc conseguiu chegar aqui rapaz?";
				break;
			}
			break;
		default:
			cout << "\nComo vc conseguiu chegar aqui?";
			break;
		}
		break;
	case 'c':
		switch (opA) {
			case 1:
				cout << numero2 << " < " << numero1 << " < " << numero3 ;
				break;
			case 2: 
				if (opB == 3) {
						cout << numero3 << " < " << numero2 << " < " << numero1; 
					} else {
						if (opB == 7){
							cout << numero2 << " > " << numero3 << " > " << numero1;
						} else {
							cout << numero2 << " = " << numero3 << " > " << numero1;
					} 
					}
				break;
			case 3:
				cout << numero3 << " < " << numero1 << " < " << numero2 ;
				break;
			case 4:
				cout << "Todos os Numeros sao iguais";
				break;
			case 5:
				if (opC == 2){
					cout << numero1 << " = " << numero2 << " < " << numero3;
				} else {
					cout << numero3 << " < " << numero2 << " = " << numero1;
				}
				break;
			case 6:
				if (opB == 2){
					cout << numero1 << " = " << numero3 << " < " << numero2;
				} else {
					cout << numero2 << " < " << numero3 << " = " << numero1;
				}
				break;
			case 7:
				switch (opB) {
				case 1:
					cout << numero1 << " < " << numero2 << " < " << numero3;
					break;
				case 2:
					cout << numero1 << " < " << numero3 << " < " << numero2;
					break;
				case 6: 
					cout << numero1 << " < " << numero2 << " = " << numero3;
					break;
				default:
					cout << "\nComo vc conseguiu chegar aqui rapaz?";
					break;
				}
				break;
			default:
				cout << "\nComo vc conseguiu chegar aqui?";
				break;
		}
		break;	
	default:
		cout << "\nErro: Letra escolhida nao equivale a uma escolha definida.";
		break;
	}
	
	cout << '\n';
	system("pause");
    return 0;
}