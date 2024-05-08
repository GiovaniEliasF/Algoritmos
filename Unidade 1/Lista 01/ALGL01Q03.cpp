#include <iostream>
using namespace std;

/*
Algoritmos e Programacão
Lista 01 - Questão 03
"Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
a vista ou parcelado em até 10 vezes sem juros."
*/

int main() {
    int qntdParcerlas;
    float valorTotal, valorParcela;
    
    cout << "Descobrir o valor do parcelamento da compra: \n";
    cout << "Qual o valor total da compra R$";
    cin >> valorTotal;
    if (valorTotal > 0){
        cout << "\nEm quantas prestações a compra foi parcelada: ";
        cin >> qntdParcerlas;
        if (qntdParcerlas < 10 && qntdParcerlas > 0) {
            valorParcela = valorTotal/qntdParcerlas;
            cout << "\nO valor da parcela será de: R$" << valorParcela;
        } else {
            cout << "\nErro: A compra pode ser feita apenas à vista ou em até 10x sem juros.";
        }
    } else {
        cout << "\nErro: Dados inseridos são negativos ou inválidos";
    }
    
    return 0;
}