/*
Algoritmos e Programacão
Lista 01 - Questão 09
"Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10."
*/

#include <iostream>
using namespace std;

int main() {
    
    int Val1, Val2, aux;
    
    cout << "Troca de valores entre Variáveis.";
    cout << "Digite o Valor que será atribuido a variável Val1:";
    cin >> Val1;
    cout << "Digite o Valor que será atribuido a variável Val2:";
    cin >> Val2;
    
    cout << "Os valores iniciais são:" << endl;
    cout << "Val1 = " << Val1 << endl;
    cout << "Val2 = " << Val2 << endl;
    
    aux = Val1;
    Val1 = Val2;
    Val2 = aux;
    
    cout << "Os atuais valores são:" << endl;
    cout << "Val1 = " << Val1 << endl;
    cout << "Val2 = " << Val2;
    
    return 0;
}


