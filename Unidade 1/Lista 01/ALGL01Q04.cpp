/*
Algoritmos e Programacão
Lista 01 - Questão 04
"Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número."
*/

#include <iostream>
using namespace std;

int main() {
    
    int N;
    float percentual, resultado, porcentagem;
    
    cout << "Calculadora de percentual" << endl;
    cout << "Digite o Número Inteiro no qual você quer descobrir a porcentagem: ";
    cin >> N;
    cout << endl << "Agora digite o percentual que você quer aplicar: %";
    cin >> porcentagem;
    percentual = porcentagem/100;
    resultado = N*percentual;
    cout << endl << porcentagem << "%" << " de " << N << " é " << resultado;

    return 0;
}

