#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, teste = 1;
    bool b = true;
    while (cin >> m && m != 0) {
        b = false;
        string expressao;
        cin >> expressao;  // Ler a express�o aritm�tica como string
        int soma = 0;      // Inicializar a vari�vel que armazenar� o resultado
        string aux = "";   // String auxiliar para armazenar cada n�mero
        bool somar = true; // Indica se deve somar ou subtrair o pr�ximo n�mero
        for (char c : expressao) {
            if (isdigit(c)) {
                aux += c;
            } else {
                if (!aux.empty()) {
                    int num = stoi(aux);
                    if (somar) {
                        soma += num;
                    } else {
                        soma -= num;
                    }
                    aux = "";
                }

                somar = (c == '+');
            }
        }

        if (!aux.empty()) {
            int num = stoi(aux);
            if (somar) {
                soma += num;
            } else {
                soma -= num;
            }
        }

        cout << "Teste " << teste << endl;
        cout << soma << endl<<endl;

        teste++;
    }
    return 0;
}
