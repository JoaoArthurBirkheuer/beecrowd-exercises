#include <iostream>
#include <set>
using namespace std; 

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int alunos, aluno;
    cin >> alunos;
    set<int> presencas;
    while(alunos--){
        cin >> aluno;
        presencas.insert(aluno);
    }
    cout << presencas.size() << endl;
 
    return 0;
}