/*
Algoritmos e Programacão
Lista 02 - Questão 02
"Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo"
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    float N;
    
    cout << "Verificação de Número.\nÍmpar ou Par, caso seja Par verificar se maior que 100, caso seja ímpar verificar se postivo ou negativo.";
    cout << endl << "Insira o valor de N:";
    cin >> N;
    if (fmod(N,2)==0){
        if (N > 100){
            cout << "\nN é maior que 100";
        } else {
            cout << "\nN é menor que 100";
        }
    } else {
        if (N > 0) {
            cout << "\nN é postivo";
        } else {
            cout << "\nN é negativo";
        }
    }
    return 0;
}





