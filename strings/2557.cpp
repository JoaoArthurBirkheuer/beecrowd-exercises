#include <iostream>
#include <string>
using namespace std;
int retornaNumAteCharEspecifico(string base,char limitador,int posic);
int main() {

    string op;
    while(getline(cin,op))
    {
        int pos = 0, posIgual = 0;
        for(int i=0;i<op.length();i++)
        {
            if(op[i] == '+') pos = i;
            else if(op[i] == '=') posIgual = i;
        }
        int num1 = retornaNumAteCharEspecifico(op,'+',0);
        int num2 = retornaNumAteCharEspecifico(op,'=',pos+1);
        int num3 = retornaNumAteCharEspecifico(op,'&',posIgual+1);

        if(num1 == 0)
        {
            num1 = num3 - num2;
            cout<<num1<<endl;
            continue;
        }
        else if(num2 == 0)
        {
            num2 = num3 - num1;
            cout<<num2<<endl;
            continue;
        }
        else
        {
            num3 = num1 + num2;
            cout<<num3<<endl;
            continue;
        }
    }

    return 0;
}

int retornaNumAteCharEspecifico(string base,char limitador,int posic)
{
    string iterador = "";
    for(int i=posic;base[i] != limitador && i<base.length();i++)
        iterador += base[i];
    if(iterador.length() == 1 && !isdigit(iterador[0])) return 0;
    else
    {
        int num = stoi(iterador);
        return num;
    }
}
