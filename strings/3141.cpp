#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome = "", dataAniver = "", dataAtual = "", diaAt = "", mesAt = "", anoAt = "", diaAn = "", mesAn = "", anoAn = "";
    getline(cin,nome);
    getline(cin,dataAtual);
    getline(cin,dataAniver);
    for(int i=0; i<dataAtual.length(); i++)
    {
        if(i==0||i==1) diaAt+=dataAtual[i];
        else if(i==3||i==4) mesAt+=dataAtual[i];
        else if(i>5) anoAt+=dataAtual[i];
    }
    for(int i=0; i<dataAniver.length(); i++)
    {
        if(i==0||i==1) diaAn+=dataAniver[i];
        else if(i==3||i==4) mesAn+=dataAniver[i];
        else if(i>5) anoAn+=dataAniver[i];
    }

    int dHoje = stoi(diaAt), mHoje = stoi(mesAt), aHoje = stoi(anoAt);
    int dAniver = stoi(diaAn), mAniver = stoi(mesAn), aAniver = stoi(anoAn);

    if (mAniver == mHoje && dHoje == dAniver)
        cout << "Feliz aniversario!\nVoce tem " << aHoje - aAniver << " anos " << nome << "." << endl;
    else
        (mAniver > mHoje || (mAniver == mHoje && dAniver > dHoje)) ? cout << "Voce tem " << aHoje - aAniver - 1 << " anos " << nome << "." << endl : cout << "Voce tem " << aHoje - aAniver << " anos " << nome << "." << endl;

    return 0;
}
