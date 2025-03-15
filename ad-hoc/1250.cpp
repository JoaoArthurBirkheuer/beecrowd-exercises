#include <iostream>

using namespace std;

int main() {

    int x;
    cin>>x;
    cin.ignore();
    while(x--)
    {
        string jumps = "";
        int moves = 0, hits = 0;
        cin>>moves;
        cin.ignore();
        int v[moves];
        for(int i=0;i<moves;i++) cin>>v[i];
        cin.ignore();
        getline(cin,jumps);
        for(int i=0;i<moves;i++)
            if((jumps[i]=='J'&&v[i]>2)||(jumps[i]=='S'&&(v[i]==1||v[i]==2))) hits++;
        cout<<hits<<endl;
    }
    return 0;
}
