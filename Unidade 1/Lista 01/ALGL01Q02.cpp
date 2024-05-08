#include<iostream>
using namespace std;

/*
Algoritmos e Programacão
Lista 01 - Questão 02.
"Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de 
uma carteira."
*/

int main() {
    
    int anos,qntdCigarros;
    float precoCarteira, totalGasto;
    
    cout << "Calculadora de dinheiro gasto sendo fumante\n";
    cout << "Faz quantos anos que você fuma? ";
    cin >> anos;
    cout << "\nVocê fuma quantos cigarros por dia? ";
    cin >> qntdCigarros;
    cout << "\nE qual o preço médio da carteira de cigarro? R$";
    cin >> precoCarteira;
   
   if (anos > 0 && qntdCigarros > 0 && precoCarteira > 0) {
       totalGasto = anos*365*qntdCigarros*(precoCarteira/20);
       cout << "\nSeu gasto em Cigarros durante de sua vida foi em torno de: R$" << totalGasto;
   } else {
       cout << "Erro: Seus valores são negativos ou inválidos.";
   }
    
    return 0;
}