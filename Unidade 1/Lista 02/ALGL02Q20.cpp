/*
Algoritmos e Programacão
Lista 02 - Questão 20
Calcular  o  valor  a  ser  pago  por  um  plano  de  saúde  dada  a  idade  do  conveniado.  Considere  que  todos 
pagam R$ 100 mais um adicional conforme a seguinte tabela:  
• Crianças com menos de 10 anos pagam R$80;  
• Conveniados com idade entre 10 e 30 anos pagam R$50;  
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;  
• Conveniados com mais de 60 anos pagam R$130.
*/

#include <iostream>
using namespace std;

int main() {
    
	int idade;

	cout << "Calculadora de preço de plano de Saude.\n";
	cout << "Digite a Idade do Conveniado: ";
	cin >> idade;

	if (idade < 0) {
		cout << "Valor digitado é negativo.";
	} else {
		if (idade < 10) {
			cout << "O Valor do Plano sera: R$ " << 100+80.00 ;
		} else {
			if (idade < 31) {
				cout << "O Valor do Plano sera: R$ " << 100+50.00 ;
			} else {
				if (idade < 61){
					cout << "O Valor do Plano sera: R$ " << 100+95.00 ;
				} else {
					cout << "O Valor do Plano sera: R$ " << 100+180.00 ;
				}
			}
		}
	}

	cout << '\n';
	system("pause");
    return 0;
}