/*
Algoritmos e Programacão
Lista 02 - Questão 14
" Leia 3 números inteiros e escreva uma das seguintes mensagens: 
• Todos os números são iguais;     
• Todos os números são diferentes;   
• Apenas dois números são iguais.   "
*/

#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;
	cout << "Verificação de dados numericos";
	cout << '\n' << "Digite o primeiro numero:";
	cin >> num1;
	cout << "Digite o segundo numero:";
	cin >> num2;
	cout << "Digite o terceiro numero:";
	cin >> num3;
	if (num1 == num3 && num1 == num2){
		cout << "Todos os numeros sao Iguais";
	} else {
		if (num1 == num2 || num2 == num3 || num1 == num3){
			cout << "Dois numeros sao Iguais";
		} else {
			cout << "Todos os numeros sao Diferentes";
		}
	}
	cout << '\n';
	system("pause");
    return 0;
}
