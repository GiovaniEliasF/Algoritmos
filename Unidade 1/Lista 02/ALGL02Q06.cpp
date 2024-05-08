/*
Algoritmos e Programacão
Lista 02 - Questão 06
" A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule 
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
Professor nível 1 R$ 12,00 por hora aula
Professor nível 2 R$ 17,00 por hora aula
Professor nível 3 R$ 25,00 por hora aula"
*/

#include <iostream>
using namespace std;

int main() {
    int nivel, cargaHoraria;
	float salario;

	cout << "Calculadora de Salario de Professores.\n";
	cout << "Digite o para qual nviel você ministra as aulas:";
	cin >> nivel;
	cout << "Qual sua Carga horaria semana?";
	cin >> cargaHoraria;

	switch (nivel) {
	case 1:
		salario = cargaHoraria*4*12.00;
		cout << "\nSeu Salário mensal é: R$" << salario;
		break;
	case 2:
		salario = cargaHoraria*4*17.00;
		cout << "\nSeu Salário mensal é: R$" << salario;
		break;
	case 3:
		salario = cargaHoraria*4*25.00;
		cout << "\nSeu Salário mensal é: R$" << salario;
		break;
	default:
		cout << "Erro: Dados inseridos são inválidos ou negativos";
		break;
	}
	cout << '\n';
	system ("pause");
    return 0;
}


