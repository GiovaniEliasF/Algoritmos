/*
Algoritmos e Programacão
Lista 01 - Questão 08
"Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. "
*/

#include <iostream>
using namespace std;

int main() {
    
    float reais, dolar;
    const float cotacaoDolar = 4.95; // Cotação do dólar em 07/03/2023 às 09:04
    
    cout << "Calculadora de conversão de R$ para US$." << endl ;
    cout << "Digite o valor de R$ que deseja converter: R$";
    cin >> reais;
    
    dolar = reais*cotacaoDolar;
    
    cout << endl << "Em 07/03/2023, R$" << reais << " equivalia a US$" << dolar;
    
    
    return 0;
}



