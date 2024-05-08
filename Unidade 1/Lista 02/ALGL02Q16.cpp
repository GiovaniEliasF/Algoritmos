/*
Algoritmos e Programacão
Lista 02 - Questão 16
"Leia  a  idade  de  uma  pessoa  e  escreva  se  ela  já  tem  idade  para  tirar  carteira  de  habilitação  (18  anos 
completos)  ou  não.  Se  não  tiver  idade,  escreva  também  quantos  anos  faltam  para  que  possa  tirar  a 
carteira."
*/

#include <iostream>
using namespace std;

int main() {
    int idade;
	cout << "Descubra se voce ja pode tirar a carteira de habilitacao";
	cout << "\nDigite sua idade:";
	cin >> idade;
	if (idade > 80) {
		cout << "Nem vale mais a pena tirar a Habilitacao";
	} else {
		if (idade >= 18) {
			cout << "Parabens, voce ja pode tirar a Carteira de Habilitacao.";
		} else {
			if (idade >= 0 || idade < 18){
				cout << "Infelizmente voce ainda nao pode tirar a Carteira de Habilitacao e faltam " << 18-idade <<
				" anos para poder tirar sua habilitacao.";

			} else {
				cout << "Erro: Voce ainda nao nasceu.";
			}
		}
	}
	cout << '\n';
	system("pause");
    return 0;
}