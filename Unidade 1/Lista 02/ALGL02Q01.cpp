/*
Algoritmos e Programacão
Lista 02 - Questão 01
"Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais;
• Escaleno: tem os comprimentos dos três lados diferentes.
"
*/

#include <iostream>
using namespace std;

int main() {
    
    float X, Y, Z;
    
    cout << "Validação de triângulos." << endl;
    cout << "Digite o comprimento do Primeiro lado do Triângulo que deseja testar: ";
    cin >> X;
    cout << "\nDigite o comprimento do Segundo lado do Triângulo que deseja testar: "; 
    cin >> Y;
    cout << "\nDigite o comprimento do Terceiro lado do Triângulo que deseja testar: ";
    cin >> Z;
    if (X > 0 || Y > 0 || Z > 0){
        if (X < Y+Z && Y < X+Z && Z < X+Y){
            if (Z==Y && Z==X && X == Y){
                cout << "\n\tSeu Triângulo é Equilátero.";
            } else if (Z==Y || Z==X || X==Y){
                cout << "\n\tSeu Triângulo é Isósceles.";
            }
            if (Z!=X && Z!=Y && Y!=X){
                cout << "\n\tSeu Triângulo é Escaleno.";
            }
        } else {
            cout << "\nDe acordo com os dados inseridos não possibilitam a existência de um Triângulo." << endl;
            cout << "Tente seguir as propriedades matemáticas: ''O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados''";
        }
    } else {
        cout << "\nErro: Valores inseridos negativos ou inválidos";
    }
    return 0;
}




