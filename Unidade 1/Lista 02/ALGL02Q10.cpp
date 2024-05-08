/*
Algoritmos e Programacão
Lista 02 - Questão 10
"A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média 
das  três  notas  mencionadas  anteriormente  obedece  aos  pesos:  Trabalho  de  Laboratório:  2;  Avaliação 
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media 
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. "
*/

#include <iostream>
using namespace std;

int main() {
    float notaTL, notaAS , notaEF, media;

	cout << "Calculadora de Nota Media\n";
	cout << "Digite a Sua nota no Trabalho de Laboratorio:";
	cin >> notaTL;
	cout << "Digite a Sua nota na Avaliacao Semestral:";
	cin >> notaAS;
	cout << "Digite a Sua nota no Exame Final:";
	cin >> notaEF;
	if (notaTL >= 0 && notaTL <= 10 && notaAS >= 0 && notaAS <= 10 && notaEF >= 0 && notaEF <= 10){
		media = (notaTL*2+notaAS*3+notaEF*5)/10.0;
		if (media <= 2.9) {
			cout << "Sua Media eh: " << media << " e voce foi REPROVADO.";
		} else {
			if (media <= 4.9){
				cout << "Sua Media eh: " << media << " e voce esta de RECUPERACAO.";
			} else {
				cout << "Sua Media eh: " << media << " e voce foi APROVADO.";
			}
		}
	} else {
		cout << "Erro: Valores inseridos nao se encaixam nos padroes de notas.";
	}
	cout << '\n';
	system("pause");
    return 0;
}
