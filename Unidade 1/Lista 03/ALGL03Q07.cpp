/*
Algoritmos e Programacão
Lista 03 - Questão 07
"Elabore  um  algoritmo  que  implemente  uma  calculadora  real:  o  usuário  digita  um  número,  depois  a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação."
*/

#include <iostream>
using namespace std;

int main() {
    
	char operacao;
	int i;
	float resultado, N1, N2;
	bool operacaoValida;
	i = 1;
	
	do {
		if (i == 1) {
			cout << "\tCalculadora\n";
			cout << "Operacoes: +, -, /, *\n";
			cout << "Digite ''='' para Calcular.\n";
			cout << "Digite o " << i << "o. Numero: ";
			cin >> N1;
		} else {
			N1 = resultado;
		}
		
		do { //verificando operacao
			cout << "Digite a " << i << "a. Operacao: ";
			cin >> operacao;
			if (operacao == '+' || operacao == '-' || operacao == '/' || operacao =='*' || operacao == '=') {
				operacaoValida = true;
			} else {
				cout << "Por favor, digite uma das operacoes listadas acima.\n";
				operacaoValida = false;
			}
		} while (!operacaoValida);
		i++;

		if ((operacao == '=' && i == 1) || operacao != '=') {
			do {  // Entrada Numero 2
				cout << "Digite o " << i << "o. Numero: ";
				cin >> N2;
				if (operacao == '/' && N2 == 0){ //caso seja uma divisao, nao permitir que o segundo numero seja = 0
					cout << "Erro: Denominador nao pode ser igual a 0. \n";
				}
			} while (N2 == 0 && operacao == '/');
		}

		switch (operacao) {
		case '+':
			resultado = N1+N2;
			break;
		case '-':
			resultado = N1-N2;
			break;
		case '/':
			resultado = N1/N2;
			break;
		case '*':
			resultado = N1*N2;
			break;
		case '=':
			if (i == 1 ){ // Caso for a primeira operaçao e seja um "=". Ele compara ambos os numeros
				if (N1 == N2){
					cout << "Os Numeros sao Iguais.\n";
				} else {
					cout << "Os Numeros Nao sao Iguais.\n";
				}
			} else {
				cout << "O Resultado e: " << resultado;
			}
			break;
		}
	} while (operacao != '=');
	
	cout << '\n';
	system("pause");
    return 0;
}