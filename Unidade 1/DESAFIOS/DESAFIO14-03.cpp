/*
Algoritmos e Programacão
Desafio 14/03/2024
""Elabore um algoritmo que leia três valores inteiros,
dia, mês e ano, e escreva a data por extenso. 
Exemplo: para a entrada dia = 13, mês = 3 e ano = 2024,
a saída deve ser 'treze de março de dois mil e vinte e quatro'
Em caso de data inválida (dia inválido, mês inválido ou
ano inválido - aceitar no máximo o ano de 2024), o algoritmo
deverá informar a mensagem 'Data Inválida'."
*/

#include <iostream>
using namespace std;

int main() {
    int dia, mes, ano;
    string Dia, Mes, Ano;
    bool flagE;
    
    cout << "Conversor de data Numrica para data por Extenso.\n";
    cout << "Digite a data que deseja converter:";
    cout << "\nDia:";
    cin >> dia;
    //dia = 1;
    cout << "Mes:";
    cin >> mes;
    cout << "Ano:";
    cin >> ano;
    cout << '\n';
    if (ano <=2024 && ano > 0){

        if (ano >= 2000){
            Ano = "Dois mil";
        } else {
            if (ano >= 1000){
                Ano = "Mil";
            }
        }

        if (ano > 2000) {
            Ano = Ano + " e ";
            ano = ano-2000;
        } else {
            if (ano%1000 > 0 && ano%100 == 0 && ano/1000 > 0) {
                Ano = Ano + " e ";
                ano = ano-1000;
            } else {
                if (ano%1000 > 0 && ano/1000 > 0){
                    Ano = Ano +", ";
                    ano = ano-1000;
                }
            }
        }
        
        if (ano/100 == 1 && ano%100 == 0 ) {
            Ano = Ano + "Cem";
            ano = ano-100;
            flagE = true;
        } else {
            if (ano/100 == 1 && ano%100 > 0){
                Ano = Ano + "Cento";
                ano = ano-100;
                flagE = true;
            }
        }
        
        switch (ano/100) {
            case 2:
                Ano = Ano + "Duzentos";
                ano = ano-200;
                flagE = true;
                break;
            case 3:
                Ano = Ano + "Trezentos";
                ano = ano-300;
                flagE = true;
                break;
            case 4:
                Ano = Ano + "Quatrocentos";
                ano = ano-400;
                flagE = true;
                break;
            case 5:
                Ano = Ano + "Quinhentos";
                ano = ano-500;
                flagE = true;
                break;
            case 6:
                Ano = Ano + "Seiscentos";
                ano = ano-600;
                flagE = true;
                break;
            case 7:
                Ano = Ano + "Setecentos";
                ano = ano-700;
                flagE = true;
                break;
            case 8:
                Ano = Ano + "Oitocentos";
                ano = ano-800;
                flagE = true;
                break;
            case 9:
                Ano = Ano + "Novecentos";
                ano = ano-900;
                flagE = true;
                break;
        }

        if (ano%100 > 0){
            //cout << "Teste: " << ano;
            if(flagE) {
                Ano = Ano + " e ";
            }
            if (ano > 90 && ano < 100){
                Ano = Ano + "Noventa e ";
                ano = ano-90;
            }
            if (ano > 80 && ano < 90){
                Ano = Ano + "Oitenta e ";
                ano = ano-80;
            }
            if (ano > 70 && ano < 80){
                Ano = Ano + "Setenta e ";
                ano = ano-70;
            }
            if (ano > 60 && ano < 70){
                Ano = Ano + "Sessenta e ";
                ano = ano-60;
            }
            if (ano > 50 && ano < 60){
                Ano = Ano + "Cinquenta e ";
                ano = ano-50;
            }             
            if (ano > 40 && ano < 50){
                Ano = Ano + "Quarenta e ";
                ano = ano-40;
            }
            if (ano > 30 && ano < 40){
                Ano = Ano + "Trinta e ";
                ano = ano-30;
            }
            if (ano > 20 && ano < 30){
                Ano = Ano + "Vinte e ";
                ano = ano-20;
            }
            /*
            switch (ano/10){
                case 1:
                    break;
                case 2:

                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
            }*/
            switch (ano){
                case 1:
                    Ano = Ano + "Um"; 
                    break;   
                case 2:
                    Ano = Ano + "Dois";
                    break;
                case 3:
                    Ano = Ano + "Tres";
                    break;
                case 4:
                    Ano = Ano + "Quatro";
                    break;
                case 5:
                    Ano = Ano + "Cinco";
                    break;
                case 6:
                    Ano = Ano + "Seis";
                    break;
                case 7:
                    Ano = Ano + "Sete";
                    break;
                case 8:
                    Ano = Ano + "Oito";
                    break;
                case 9:
                    Ano = Ano + "Nove";
                    break;
                case 10:
                    Ano = Ano +"Dez";
                    break;
                case 11:
                    Ano = Ano +"Onze";
                    break;
                case 12:
                    Ano = Ano +"Doze";
                    break;
                case 13:
                    Ano = Ano +"Treze";
                    break;
                case 14:
                    Ano = Ano +"Quatorze";
                    break;
                case 15:
                    Ano = Ano +"Quinze";
                    break;
                case 16:
                    Ano = Ano +"Dezesseis";
                    break;
                case 17:
                    Ano = Ano +"Dezessete";
                    break;
                case 18:
                    Ano = Ano +"Dezoito";
                    break;
                case 19:
                    Ano = Ano +"Dezenove";
                    break;
                case 20:
                    Ano = Ano +"Vinte";
                }
        }

        if (mes > 0 && mes <= 12){
            switch(mes){
                case 1:
                    Mes = "Janeiro";
                    break;
                case 2:
                    Mes = "Fevereiro";
                    break;
                case 3:
                    Mes = "Marco";
                    break;
                case 4:
                    Mes = "Abril";
                    break;
                case 5:
                    Mes = "Maio";
                    break;
                case 6:
                    Mes = "Junho";
                    break;
                case 7:
                    Mes = "Julho";
                    break;
                case 8:
                    Mes = "Agosto";
                    break;
                case 9:
                    Mes = "Setembro";
                    break;
                case 10:
                    Mes = "Outubro";
                    break;
                case 11:
                    Mes = "Novembro";
                    break;
                case 12:
                    Mes = "Dezembro";
                    break;
            }
            if (dia > 0 && ((mes == 2 && dia <=28) || ((((mes <= 7 && mes%2 == 1) || (mes >=8 && mes%2 == 0)) && dia <= 30) ||
            (((mes <= 7 && mes%2 == 0) && mes != 2 ) || (mes >=8 && mes%2 == 1)) && dia <= 31 ))){
                if (dia > 30 ){
                    Dia = "Trinta e ";
                    dia = dia-30;
                }
                if (dia > 20 && dia < 30){
                    Dia = "Vinte e ";
                    dia = dia-20;
                }
                switch (dia){
                    case 1:
                        Dia = Dia + "Um"; 
                        break;   
                    case 2:
                        Dia = Dia + "Dois";
                        break;
                    case 3:
                        Dia = Dia + "Tres";
                        break;
                    case 4:
                        Dia = Dia + "Quatro";
                        break;
                    case 5:
                        Dia = Dia + "Cinco";
                        break;
                    case 6:
                        Dia = Dia + "Seis";
                        break;
                    case 7:
                        Dia = Dia + "Sete";
                        break;
                    case 8:
                        Dia = Dia + "Oito";
                        break;
                    case 9:
                        Dia = Dia + "Nove";
                        break;
                    case 10:
                        Dia = "Dez";
                        break;
                    case 11:
                        Dia = "Onze";
                        break;
                    case 12:
                        Dia = "Doze";
                        break;
                    case 13:
                        Dia = "Treze";
                        break;
                    case 14:
                        Dia = "Quatorze";
                        break;
                    case 15:
                        Dia = "Quinze";
                        break;
                    case 16:
                        Dia = "Dezesseis";
                        break;
                    case 17:
                        Dia = "Dezessete";
                        break;
                    case 18:
                        Dia = "Dezoito";
                        break;
                    case 19:
                        Dia = "Dezenove";
                        break;
                    case 20:
                        Dia = "Vinte";
                }
                cout << Dia << " de " << Mes << " de " << Ano;
            } else {
                cout << "Dia Invalido para o Mes Desejado";
            }
        } else {
            cout << "Mes Invalido";
        }
    } else {
        cout << "Ano Invalido, maximo permitido eh 2024";
    }
    cout << '\n';
    system ("pause");
    return 0;
    
}


