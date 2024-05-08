/*
Algoritmos e Programacão
Lista 01 - Questão 07
"Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius. "
*/

#include <iostream>
using namespace std;

int main() {
    
    float C, F;
    
    cout << "Conversor de Temperatura em Celsius para Fahrenheit." << endl;
    cout << "Digite o valor da Temperatura em °C: ";
    cin >> C;
    F = (9*C+160)/5;
    cout << endl << C << "°C é igual a " << F << "°F";
    

    return 0;
}



