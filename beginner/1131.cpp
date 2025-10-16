#include <iostream>
using namespace std;
 
int main() {
 
    int inter, gremio, repetir, vinter = 0, vgremio = 0, emp = 0;
    string resultado = "";
    repeat:{
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> inter >> gremio >> repetir;
        if(inter > gremio) vinter++;
        else if(inter == gremio) emp++;
        else vgremio++;
        
        if(repetir == 1) goto repeat;
    }
    int grenais = vinter + vgremio + emp;
    if(grenais > 1) cout << grenais << " grenais\n";
    else cout << "1 grenal\n";
    
    cout << "Inter:" << vinter << endl;
    cout << "Gremio:" << vgremio << endl;
    cout << "Empates:" << emp <<endl;
    
    if(vinter > vgremio) cout << "Inter venceu mais\n";
    else if(vinter < vgremio) cout << "Gremio ganhou mais\n";
    else cout << "Nao houve vencedor\n";
 
    return 0;
}