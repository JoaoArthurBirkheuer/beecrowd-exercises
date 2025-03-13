#include <iostream>

#include <stack>

using namespace std;

int main() {

  ///se removidos == 4, presenteados++
  ///senao, devolve os elementos pra pilha
  int t;
  while (cin >> t) {
      if(t == 0) break;
    stack < char > painel, aux1;
    int presenteados = 0;
    while (t--) {
      if (painel.empty()) {
        painel.push('F');
        painel.push('A');
        painel.push('C');
        painel.push('E');
      }
      char v[4];
      for (int i = 0; i < 4; i++) cin >> v[i];
      int iguais = 0, i = 0;
      while (i<4) {
        aux1.push(painel.top());
        if (v[i] == painel.top()) iguais++;
        painel.pop();
        i++;
      }
      if(iguais != 4)
      {
          while(!aux1.empty())
          {
              painel.push(aux1.top());
              aux1.pop();
          }
          painel.push(v[0]);
          painel.push(v[1]);
          painel.push(v[2]);
          painel.push(v[3]);
      }
      else
      {
          presenteados++;
      }
    while(!aux1.empty()) aux1.pop();
    }
    cout<<presenteados<<endl;
  }

  return 0;
}
