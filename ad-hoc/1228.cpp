#include <bits/stdc++.h>
using namespace std;

int main(){
    int p;
    while(cin >> p){
        int overtakes = 0;
        vector<int> start(p), finish(p);

        for(int i = 0; i < p; i++) cin >> start[i];
        for(int i = 0; i < p; i++) cin >> finish[i];

        for(int i = 0; i < p; i++){
            if(start[i] != finish[i]){
                int j = i + 1;
                while(j < p && start[j] != finish[i]) j++;
                while(j > i){
                    swap(start[j], start[j - 1]);
                    j--;
                    overtakes++;
                }
                i = -1;
            }
        }
        cout << overtakes << endl;
    }
    return 0;
}
