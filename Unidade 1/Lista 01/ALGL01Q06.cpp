/*
Algoritmos e Programacão
Lista 01 - Questão 06
"O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor. "
*/

#include <iostream>
using namespace std;

int main() {
    float custoFabricacao, preco;
    const float impostos = 0.45, distribuidor = 0.28;
    cout << "Precificação de um Carro com base no Custo de Fabricação.";
    cout << endl << "Qual o Custo de Fabricação do Carro? R$";
    cin >> custoFabricacao;
    preco = custoFabricacao+custoFabricacao*distribuidor+custoFabricacao*impostos;
    cout << endl << "O Preço final do Carro será: R$" << preco;
    
    return 0;
}


