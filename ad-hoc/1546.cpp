#include <iostream>
using namespace std;
 
int main() {
 
    int days, feedbacks, input;
    cin >> days;
    while(days--){
        cin >> feedbacks;
        while(feedbacks--){
            cin >> input;
            if(input == 1) cout << "Rolien\n";
            else if(input == 2) cout << "Naej\n";
            else if(input == 3) cout << "Elehcim\n";
            else cout << "Odranoel\n";
        }
    }
 
    return 0;
}