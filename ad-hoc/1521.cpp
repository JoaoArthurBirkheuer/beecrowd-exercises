#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin>>n){
        if(!n) break;
        vector<int> students(n);
        for(int i=0;i<n;i++) cin>>students[i];
        int found = 0;
        int startP_input; 
        cin>>startP_input;
        int current_student_idx = startP_input - 1; 

        while(!found){
            if(students[current_student_idx] == (current_student_idx + 1)) {
                found = current_student_idx + 1; 
            } else {
                current_student_idx = students[current_student_idx] - 1;
            }
        }
        cout<<found<<endl;
    }
    return 0;
}