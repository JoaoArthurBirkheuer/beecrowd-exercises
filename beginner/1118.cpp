#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << fixed;
    int novoCalculo = 0;
    while(true){
        bool sair = false;
        double nota1 = -1, nota2 = -1;
        while(nota1 < 0 || nota1 > 10){
            cin >> nota1;
            if(nota1 < 0 || nota1 > 10)
                cout << "nota invalida\n";
        }
        while(nota2 < 0 || nota2 > 10){
            cin >> nota2;
            if(nota2 < 0 || nota2 > 10)
                cout << "nota invalida\n";
        }
        cout << "media = " << setprecision(2) << (nota1 + nota2)/2.00 << endl;
        while(true){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> novoCalculo;
            if (novoCalculo == 1 || novoCalculo == 2) break;
        }

        if(novoCalculo == 2) break;
        else novoCalculo = 0;
    }
    return 0;
}
