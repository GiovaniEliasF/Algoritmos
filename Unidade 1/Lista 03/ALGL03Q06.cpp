/*
Algoritmos e Programacão
Lista 03 - Questão 06
"Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa.  Se  após  três  tentativas  o  jogador  não  descobrir  o  número,  então  ele  perde  o  jogo.  Faça  um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário. "
*/

#include <iostream>
using namespace std;

int main() {
    
	int tentativas, numAleatorio, numEscolhido, op;
	bool correto;
	correto = true;
	numAleatorio = 6;  //número a ser descoberto será definido dentro do algoritmo e não estará visível para o usuário.
	op = 1;
	
	while (op == 1) { // Retorno para caso o jogador queira jogar novamente
		system ("cls");
		tentativas = 0;
		do { // Inicio das Tentativas
			tentativas++;
			do {  //Verificação se Numero Escolhido está entre a margem desejada
				cout << "\tJogo da Advinhacao\n";
				cout << "-------------------------------\n";
				cout << "Advinhe um numero entre 1 e 10.\n";
				cout << "De o seu " << tentativas << "o. palpite: ";
				cin >> numEscolhido;
				if (numEscolhido < 1 || numEscolhido > 10){
					cout << "Numero invalido, escolha um numero entre 1 e 10.\n";
					system ("pause");
					system ("cls");
				}
			} while (numEscolhido < 1 || numEscolhido > 10);
			
			if (numEscolhido == numAleatorio){ // Verificaçao se Numero é o Correto
				correto = false;
			} else { // Caso Errado
				if (tentativas !=3) { //Verificação para nao exibir mensagem após o Jogador perder.
					if (numEscolhido < numAleatorio) { //Verificação se o numero escolhido é menor ou maior que o Numero Aleatorio
						cout << "o numero correto e maior que o numero que voce escolheu.\n";
					} else {
						cout << "o numero correto e menor que o numero que voce escolheu.\n";
					}
				}
				switch (tentativas) { //Exibindo tentativas restantes para o Jogador
				case 1:
					cout << "Voce tem mais "<< 3-tentativas << " Tentativas\n";
					break;
				case 2: 
					cout << "A proxima sera sua ultima tentativa.\n";
					break;
				}
				
				system ("pause");
				system("cls");
			}

		} while (tentativas <= 2 && correto); //Sai do laço caso o jogador ganhe, ou erre em todas as tentativas

		if (!correto){ //Verificando se jogador ganhou ou perdeu
			cout << "Parabens, voce acertou em "<< tentativas << " tentativas!\n\n";
		} else {
			cout << "Infelizmente voce perdeu, experimente jogar novamente.\n\n";
		}
		// Menu para reiniciar ou sair do jogo
		cout << "1 - Jogar novamente.\n";
		cout << "2 - Sair.\n";
		cout << "Selecione sua Opcao: ";
		cin >> op;
	}
	cout << 'Fim de Jogo \n';
	system("pause");
    return 0;
}
