#include <iostream>
using namespace std;
int main()
{
    int m,p,f;
    while(cin>>m>>p>>f)
    {
        if(m==0 and p==0 and f==0) break;
        int mat[m][p], vet[f], aux = 0;
        for(int i=0;i<m;i++)
            for(int ii=0;ii<p;ii++)
                cin>>mat[i][ii];
        for(int i=0;i<f;i++)
            cin>>vet[i];
        for(int i=p-1;i>-1;i--)
        {
            for(int ii=m-1;ii>-1;ii--)
            {
                if(aux < f and mat[ii][i]==0)
                {
                    mat[ii][i] = vet[aux];
                    aux++;
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int ii=0;ii<p;ii++)
                (ii == p-1)?(cout<<mat[i][ii]<<endl):(cout<<mat[i][ii]<<" ");
    }
}
