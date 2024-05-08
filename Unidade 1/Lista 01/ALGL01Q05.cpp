/*
Algoritmos e Programacão
Lista 01 - Questão 05
"Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos."
*/

#include <iostream>
using namespace std;

int main() {
    
    int hr, min, seg, restoSeg, restoMin;
    
    cout << "Conversor de Segundos para Horas e Minutos." << endl;
    cout << "Digite a quantidade de Segundos que você deseja converter:";
    cin >> seg;
    
    if (seg > 0){
        
        restoSeg = seg%60;
        min = seg/60;
        restoMin = min%60;
        hr = min/60;
        cout << endl << seg << " Segundos é = " << hr << " Horas, " << restoMin << " Minutos e " << restoSeg << " Segundos.";
        
    } else {
        cout << "Erro: Dados inseridos são negativos ou inválidos";
    }

    return 0;
}


