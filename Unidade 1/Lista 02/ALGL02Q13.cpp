/*
Algoritmos e Programacão
Lista 02 - Questão 13
"Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por um 
carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo:  
CONSUMO (Km/l) MENSAGEM 
Menor que 	8 		Venda o carro! 
Entre 		8 e 12 	Econômico! 
Maior que 	12 		Super econômico! "
*/

#include <iostream>
using namespace std;

int main() {
    
	float km, l, consumo;

	cout << "Calculadora de Km/l\n";
	cout << "Digite quantos Km foi o Trajeto:";
	cin >> km;
	cout << "Digite quantos Litros foi consumidos:";
	cin >> l;
	consumo = km/l;
	if (consumo > 8){
		if (consumo > 12){
			cout << "O seu carro faz " << consumo << "Km/l " << '\n' << "Super Economico!" ; 
		} else {
			cout << "O seu carro faz " << consumo << "Km/l " << '\n' << "Economico!" ; 
		}
	} else {
		cout << "O seu carro faz " << consumo << "Km/l " << '\n' << "Venda o Carro!" ; 
	}

	cout << '\n';
	system("pause");
    return 0;
}
