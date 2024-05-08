/*
Algoritmos e Programacão
Lista 03 - Questão 05
"Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até  que  seja  digitada  uma  média  negativa.  Ao  final,  o  algoritmo  deve  mostrar  a  quantidade  de  alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9. "
*/

#include <iostream>
using namespace std;

int main() {
    
	int matricula, aprovados, reprovados, recuperacao, i, matriculaMediaAlta, mediaAlta;
	float mediaFinal;
	i = 1;
	reprovados = aprovados = recuperacao = mediaAlta = 0;

	do{
		cout << "Contabilizacao de medias de alunos.\n";
		cout << "Digite a Matricula do " << i << "o Aluno:";
		cin >> matricula;
		cout << "Digite a Media final do Aluno: ";
		cin >> mediaFinal;

		if (mediaFinal < 3){
			reprovados++;
			i++;
		} else {
			if (mediaFinal < 7){
				recuperacao++;
				i++;
			} else {
				if (mediaFinal <= 10) {
					aprovados++;
					i++;
					if (mediaFinal > 9) {
						matriculaMediaAlta = matricula;
						mediaAlta++;
					} 
				} else {
					cout << "Media digitada e invalida.\n";
					system("pause");
				}
			}
		}
		system ("cls");
	} while (mediaFinal >= 0); 

	cout << "Tiveram " << reprovados << " Alunos Reprovados\n";
	cout << "Tiveram " << recuperacao << " Alunos em Recuperacao\n";
	cout << "Tiveram " << aprovados << " Alunos Aprovados\n";
	if (mediaAlta >= 1) {
		cout << "O Ultimo aluno com Media superior a 9 foi o portador da Matricula: " << matriculaMediaAlta;
	} else {
		cout << "Nao teve nenhum Aluno com Media superior a 9.";
	}
	cout << '\n';
	system("pause");
    return 0;
}