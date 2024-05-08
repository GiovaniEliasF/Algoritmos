/*
Algoritmos e Programacão
Lista 02 - Questão 03
"Calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal: 
• Homem = (72,7 x altura) - 58 
• Mulher = (62,1 x altura) - 44,7"
*/

#include <iostream>
using namespace std;

int main() {
    
    float altura, pesoIdeal;
    char sexo;
    
    cout << "\tCalculadora Peso Ideal para uma pessoa.\n";
    cout << "O Programa necessita da altura e sexo do usuário para calcular o peso ideal.\n";
    cout << "Digite sua altura em cm ou M: ";
    cin >> altura;
    cout << "\nDigite seu sexo. OBS.:(M = Masculino, F = Feminino: ";
    cin >> sexo;
    
    if (altura < 0) {
        if (altura > 3) {
            altura = altura/100;
        }
        
        if (sexo == 'M' || sexo == 'm') {
            pesoIdeal = (72.7 * altura) - 58;
            cout << "O peso ideal com base na sua altura é: " << pesoIdeal << "Kg.";
        } else if (sexo == 'F' || sexo == 'f'){
            pesoIdeal = (62.1 * altura) - 44.7;
            cout << "O peso ideal com base na sua altura é: " << pesoIdeal << "Kg.";
        }
    } else {
        cout << "Erro: Dados inseridos são negativos ou inválidos.";
    }
    return 0;
}




