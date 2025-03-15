#include <iostream>

using namespace std;

int main() {

    int x,y;
    while(cin>>x>>y)
    {
        int matriz[x][y], pokemonX = 0, pokemonY = 0, playerX = 0, playerY = 0;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cin>>matriz[i][j];
                if(matriz[i][j]==1)
                {
                    playerX = i;
                    playerY = j;
                }
                else if(matriz[i][j]==2)
                {
                    pokemonX = i;
                    pokemonY = j;
                }

            }
        }
        int seg = abs(abs(playerX-pokemonX)+abs(playerY-pokemonY));
        cout<<seg<<endl;
    }
    return 0;
}
