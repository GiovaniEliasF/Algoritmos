/*
Algoritmos e Programacão
Lista 02 - Questão 08
"Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada"
*/

#include <iostream>
using namespace std;

int main() {
	int N, soma;
    char parametro;

    cout << "Digite um numero Inteiro:";
    cin >> N;
    cout << "\nDigite o ''a'' para Antecessores ou ''s'' para Sucessores:";
    cin >> parametro;

    if (parametro == 's'){
        N++;
        soma = N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        N++;
        soma = soma + N;
        cout << soma;
    } else {
        if (parametro == 'a'){
        N--;
        soma = N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        N--;
        soma = soma + N;
        cout << soma;
    }
    }

    cout << '\n';
    system("pause");
    return 0;
}



