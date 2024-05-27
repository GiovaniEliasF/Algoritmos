/*
Algoritmos e Programacão
Lista 03 - Questão 11
"Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A por 
B sem usar o operador de resto (%)."

Informações Descobertas:
Matematicamente, quando a parte Fracionária do resultado da Divisão Não Exata é multiplicada pelo Divisor, se obtém o Resto da Divisão
Uma Divisão entre numeros do tipo Int, retornará sempre apenas a parte Inteira da Divisão.
	Caso necessite da parte Fracionária da Divisão, pelo menos um dos termos deve ser do tipo Float.
Atribuir um valor Float para um Int, Despreza a parte Fracionária do número. 
*/
#include <iostream>
using namespace std;

int main() {
	int A,B;
	float resto, resultadoF;

	cout << "Calculadora de Divisao\n";
	cout << "Digite o valor do Dividendo/Numerador: ";
	cin >> A;
	do {
		cout << "Digite o valor do Divisor/Denominador: ";
		cin >> B;
		if (B < 0) {
			cout << "Erro: Divisor nao pode ser um valor Negativo.\n";
		}
	} while (B < 0);
	cout << A << "/" << B <<" = " << A/B << "\nE tem resto = ";
	resto = A; //Resto recebe o valor de A momentanemente para tranformar o valor Inteiro em um Real
	resultadoF = resto/B; //ResultadoF recebe o resultado da divisao entre Resto=(A) e B
	A = resultadoF; //A recebe a parte inteira do ResultadoF
	resultadoF -= A; //Decrementa-se o valor Inteiro de ResultadoF para que reste apenas a parte Fracionária do número
	resto = resultadoF*B; //Multiplica-se o parte Fracionária por B para se obter o Resto da Divisão
	cout << resto;


	cout << '\n';
	system("pause");
    return 0;
}
