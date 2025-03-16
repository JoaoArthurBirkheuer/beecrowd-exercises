#include <iostream>
using namespace std;
int main() {

    //OU 45% dos votos OU 40% dos votos
    //OU 10% de votos a mais que os outros candidatos
    int t;
    cin>>t;

        int v[t] = {0}, totalVotos = 0;
        int qcpc = 0, qpc = 0, dpc = 0, maior = 0;
        for(int i=0;i<t;i++)
        {
            cin>>v[i];
            totalVotos += v[i];
        }
        //cout<<totalVotos<<endl;
        qcpc = (45 * totalVotos)/100;
        //cout<<"qcpc: "<<qcpc<<endl;
        qpc = (40 * totalVotos)/100;
        //cout<<"qpc: "<<qpc<<endl;
        dpc = (10 * totalVotos)/100;
        //cout<<"dpc: "<<dpc<<endl;
        for(int in:v)
            if(maior < in)
                maior = in;
        if(maior >= qcpc)
        {
            cout<<"1"<<endl;
            return 0;
        }
        for(int i=0;i<t;i++)
        {
            if(maior < qpc || maior < dpc + v[i] && v[i] != maior)
            {
                cout<<"2"<<endl;
                return 0;
            }
        }
        cout<<"1"<<endl;
        return 0;
}
