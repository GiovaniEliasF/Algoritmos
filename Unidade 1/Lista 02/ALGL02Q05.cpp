/*
Algoritmos e Programacão
Lista 02 - Questão 04
"Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença.
CÓDIGO CARGO PERCENTUAL
101 Gerente      10%
102 Engenheiro   20%
103 Técnico      30%"
*/

#include <iostream>
using namespace std;

int main() {
    
    int cargo;
    float salario, salarioNovo;
    
    cout << "\tCalculadora de aumento de Salário\n";
    cout << "\t\tCÓDIGO CARGO\n";
    cout << "\t\t101 - Gerente\n";
    cout << "\t\t102 - Engenheiro\n";
    cout << "\t\t103 - Técnico\n";
    cout << "Digite seu antigo Salário: R$";
    cin >> salario;
    cout << "\nDigite o seu Código de Cargo: ";
    cin >> cargo;
    
    switch(cargo){
        case 101:
            salarioNovo = salario*1.1;
            cout << "\nGerente, seu histórico Salarial é:\n";
            cout << "Salário Antigo: R$" << salario;
            cout << "\nNovo Salário: R$" << salarioNovo;
            cout << "\nDiferença Salarial: R$" << salarioNovo - salario;
            break;
        case 102:
            salarioNovo = salario*1.2;
            cout << "\nEngenheiro, seu histórico Salarial é:\n";
            cout << "Salário Antigo: R$" << salario;
            cout << "\nNovo Salário: R$" << salarioNovo;
            cout << "\nDiferença Salarial: R$" << salarioNovo - salario;
            break;
        case 103:
            salarioNovo = salario*1.3;
            cout << "\nTécnico, seu histórico Salarial é:\n";
            cout << "Salário Antigo: R$" << salario;
            cout << "\nNovo Salário: R$" << salarioNovo;
            cout << "\nDiferença Salarial: R$" << salarioNovo - salario;
            break;
        default:
            salarioNovo = salario*1.4;
            cout << "\nFuncionário, seu histórico Salarial é:\n";
            cout << "Salário Antigo: R$" << salario;
            cout << "\nNovo Salário: R$" << salarioNovo;
            cout << "\nDiferença Salarial: R$" << salarioNovo - salario;
            break;
    }
    

    return 0;
}




