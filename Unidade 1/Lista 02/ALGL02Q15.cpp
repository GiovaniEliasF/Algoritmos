/*
Algoritmos e Programacão
Lista 02 - Questão 15
"Calcule as raízes de uma equação de 2º grau. Observe que:  
• x = −b ± √∆/2a, onde ∆ = B2 − 4ac; 
• ax2 + bx + c = 0 representa uma equação de 2º grau; 
• A variável a tem que ser diferente de zero. Caso seja igual, escreva a mensagem “Não é equação de 
segundo grau”;  
• Se ∆ < 0, não existe real. Escreva a mensagem “Não existe raiz”; 
• Se ∆ = 0, existe uma raiz real. Escreva a raiz e a mensagem “Raiz única”;  
• Se ∆ ≥ 0, escreva as duas raízes reais. "
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, xI, xII, delta;

	cout << "Calculadora de Equacao de Segundo Grau";
	cout << '\n' << "Digite o valor de A: ";
	cin >> a;
	cout << "Digite o valor de B: ";
	cin >> b;
	cout << "Digite o valor de C: ";
	cin >> c;

	delta = (b*b)-(4*a*c);
	xI = (-b + sqrt(delta))/(2*a);
	xII = (-b - sqrt(delta))/(2*a);

	if (a*xI*xI+b*xI+c == 0 && a > 0 ) {
		if (delta > 0){
			cout << "X' = "<< xI << " X'' =" << xII;
		} else {
			if (delta == 0){
				cout << xI << "Raiz unica";
			} else {
				if (delta < 0) {
					cout << "Nao existe raiz";
				}
			}
		}
	} else {
		cout << "Nao eh uma equacao de segundo grau";
	}


	cout << '\n';
	system("pause");
    return 0;
}
