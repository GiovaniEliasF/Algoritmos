/*
Algoritmos e Programacão
Lista 02 - Questão 07
" O cardápio de uma lanchonete é o seguinte: 

Sanduíche
Código 	Descrição 		Preço Unitário
100 	Cachorro quente	1,10
101 	Baurú simples 	1,30
102 	Baurú com ovo 	1,50
103 	Hamburger	 	1,10
104 	Cheesburger 	1,30

Bebida
Código 	Descrição 		Preço Unitário
105 	Refrigerante 	1,00
106 	Suco 			2,00
107 	Nescau		 	1,50
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche"
*/

#include <iostream>
using namespace std;

int main() {
	int codigoLanche, codigoBebida, qntdLanche, qntdBebida ;
	float precoPedido;

	cout << "--------------------------------------\n";
	cout << "\tCardapio de lanchonete.\n";
	cout << "--------------------------------------\n";
	cout << "\tMenu:\nSanduiche\n";
	cout << "Codigo\tDescricao\tPreco Unitario\n";
	cout << "100\tCachorro quente\t1,10\n";
	cout << "101\tBauru simples\t1,30\n";
	cout << "102\tBauru com ovo\t1,50\n";
	cout << "103\tHamburger\t1,10\n";
	cout << "104\tCheesburger\t1,30\n";
	cout << "\nBebida\n";
	cout << "Codigo\tDescricao\tPreco Unitario\n";
	cout << "105\tRefrigerante\t1,00\n";
	cout << "106\tSuco\t\t2,00\n";
	cout << "107\tNescau\t\t1,50\n\n";
	cout << "Faca seu Pedido:\n";
	cout << "Digite o codigo do seu Lanche:";
	cin >> codigoLanche;
	cout << "\nDigite a Quantidade desejada:";
	cin >> qntdLanche;
	cout << "\nDigite o codigo da sua Bebida:";
	cin >> codigoBebida;	
	cout << "\nDigite a Quantidade desejada:";
	cin >> qntdBebida;
	if (qntdBebida > 0 && qntdLanche > 0){
		switch (codigoLanche) {
			case 100:
			precoPedido = 1.10*qntdLanche;		
				break;
			case 101:
			precoPedido = 1.30*qntdLanche;		
				break;
			case 102:
			precoPedido = 1.50*qntdLanche;		
				break;
			case 103:
			precoPedido = 1.10*qntdLanche;	
				break;
			case 104:
			precoPedido = 1.30*qntdLanche;		
				break;
			default:
				cout << "\nErro: O Códido inserido é Inválido";
				break;
		}

		switch (codigoBebida) {
			case 105:
			precoPedido = precoPedido + 1.00*qntdBebida;		
				break;
			case 106:
			precoPedido = precoPedido + 2.00*qntdBebida;		
				break;
			case 107:
			precoPedido = precoPedido + 1.50*qntdBebida;		
				break;
			default:
				cout << "\nErro: O Códido inserido é Inválido";		
				break;
		}
		cout << "\nO total do seu Pedido foi: R$" << precoPedido;
	} else {
		cout << "Erro: Dados inseridos sao negativos";
	}
    cout << '\n';
	system("pause");
    return 0;
}


