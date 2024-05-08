/*
Algoritmos e Programacão
Lista 02 - Questão 12
"Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
não se aposentar. As condições para aposentadoria são: 
• Ter pelo menos 65 anos; 
• Ou ter trabalhado pelo menos 30 anos;  
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos."
*/

#include <iostream>
using namespace std;

int main() {

	int idade,tempoServico;
	cout << "Calculadora tempo de servico para aposentadoria";
	cout << "\nDigite sua idade em anos:";
	cin >> idade;
	cout << "Digite seu tempo de servico em anos:";
	cin >> tempoServico;
	if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
		cout << "Parabens, voce ja pode se aposentar.";
	} else {
		cout << "Infelizmente voce ainda nao pode se aposentar";
	}
    
	cout << '\n';
	system("pause");
    return 0;
}
