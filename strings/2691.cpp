#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int num1,num2;
        char lixo;
        cin>>num1>>lixo>>num2;
        if(num1 == num2)
        {
            cout<<num1<<" x 5 = "<<num1 * 5<<endl;
            cout<<num1<<" x 6 = "<<num1 * 6<<endl;
            cout<<num1<<" x 7 = "<<num1 * 7<<endl;
            cout<<num1<<" x 8 = "<<num1 * 8<<endl;
            cout<<num1<<" x 9 = "<<num1 * 9<<endl;
            cout<<num1<<" x 10 = "<<num1 * 10<<endl;
        }
        else
        {
            cout<<num1<<" x 5 = "<<num1 * 5<<" && "<<num2<<" x 5 = "<<num2 * 5<<endl;
            cout<<num1<<" x 6 = "<<num1 * 6<<" && "<<num2<<" x 6 = "<<num2 * 6<<endl;
            cout<<num1<<" x 7 = "<<num1 * 7<<" && "<<num2<<" x 7 = "<<num2 * 7<<endl;
            cout<<num1<<" x 8 = "<<num1 * 8<<" && "<<num2<<" x 8 = "<<num2 * 8<<endl;
            cout<<num1<<" x 9 = "<<num1 * 9<<" && "<<num2<<" x 9 = "<<num2 * 9<<endl;
            cout<<num1<<" x 10 = "<<num1 * 10<<" && "<<num2<<" x 10 = "<<num2 * 10<<endl;
        }
    }

    return 0;
}
