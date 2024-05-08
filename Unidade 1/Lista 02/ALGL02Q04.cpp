/*
Algoritmos e Programacão
Lista 02 - Questão 04
"Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago.
"
*/

#include <iostream>
using namespace std;

int main() {
    
    int ano;
    float preco, imposto;
    
    cout << "\tCalculador de Impostos sobre transferências de veículos\n";
    cout << "Digite o ano do carro que você quer transferir:";
    cin >> ano;
    cout << "\nDigite o preço do carro: R$";
    cin >> preco;
    if (ano > 1886 || preco > 0){
        if (ano >= 1990) {
            imposto = preco*0.015;
            cout << "\nO Imposto a ser pago é de R$" << imposto;
        } else {
            imposto = preco*0.01;
            cout << "\nO Imposto a ser pago é de R$" << imposto;
        }
    } else {
        cout << "\nErro: Dados inseridos são negativos, inválidos ou data de fabricação incorreta.";
    }

    return 0;
}




