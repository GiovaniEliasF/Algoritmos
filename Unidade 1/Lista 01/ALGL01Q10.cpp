/*
Algoritmos e Programacão
Lista 01 - Questão 10
" Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração,
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção
(E) e disjunção (OU), apresentando ao final os resultados obtidos. "
*/

#include <iostream>
using namespace std;

int main() {
    
    int A,B;
    string c,d;
    bool C,D, respE, respOu;
    
    cout << "Operações aritméticas e lógicas entre duas variáveis." << endl;
    
    cout << "\tOperações aritméticas" << endl;
    cout << "Digite um valor inteiro para a variável A: ";
    cin >> A;
    cout << "\nDigite um valor inteiro para a variável B: ";
    cin >> B;
    cout << "\nA+B = " << A+B << "\nA-B = " << A-B << "\nAxB = " << A*B
        << "\nA:B = " << A/B << endl;
    
    cout << "\tOperações aritméticas" << endl;
    cout << "Digite um valor lógico para a variável C: ";
    cin >> c;
    cout << "\nDigite um valor lógico para a variável D: ";
    cin >> d;
    
    if (c == "false" || c == "False" || c == "F" || c == "f" || c == "0" || 
    c == "falso" || c == "Falso"){
        C = false;
    }
    if (c == "true" || c == "True" || c == "T" || c == "t" || c == "1" || 
    c == "verdadeiro" || c == "Verdadeiro" || c == "V" || c == "v"){
        C = true;
    }
    if (d == "false" || d == "False" || d == "F" || d == "f" || d == "0" || 
    d == "falso" || d == "Falso"){
        D = false;
    }
    if (d == "true" || d == "True" || d == "T" || d == "t" || d == "1" || 
    d == "verdadeiro" || d == "Verdadeiro" || d == "V" || d == "v"){
        D = true;
    }
    
    if ((C == true || C == false)&&(D == true || D == false)){
        respOu = C||D;
        respE = C&&D;
        cout << "C Negado = " << !C << "\nD Negado = " << !D << "\nC e D = " << respE 
            << "\nC ou D = " << respOu;
    } else {
        cout << "Erro valores inseridos não são lógicos.";
    }    
    return 0;
}







