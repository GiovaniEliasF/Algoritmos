/*
Algoritmos e Programacão
Lista 02 - Questão 19
"Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, 
verifique e escreva se o parcelamento foi com juros ou se foi sem juros.  "
*/

#include <iostream>
using namespace std;

int main() {
    float valorTotal, valorParcela;
	int qtdParcelas; 

	cout << "Verificando se sua compra parcelada teve ou nao juros";
	cout << "\nDigite o Valor Total da sua compra: R$";
	cin >> valorTotal;
	cout << "Digite agora a Quantidade de parcelas: ";
	cin >> qtdParcelas;
	cout << "Digite o Valor de Cada parcela: R$";
	cin >> valorParcela;

	if (valorTotal == qtdParcelas*valorParcela){
		cout << "Sua compra nao teve Juros.";
	} else {
		if (valorTotal < qtdParcelas*valorParcela){
			cout << "Sua compra tem R$" << (qtdParcelas*valorParcela)-valorTotal << " de Juros."; 
		} else {
			cout << "O caixa errou o valor da sua compra e lhe deu desconto de R$" << valorTotal-(qtdParcelas*valorParcela) << " na compra parcelada.";
		}
	}
	

	cout << '\n';
	system("pause");
    return 0;
}
