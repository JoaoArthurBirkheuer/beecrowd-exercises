#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pages, linesPerPage, charsPerLine;
    while(cin >> pages >> linesPerPage >> charsPerLine){
        cin.ignore();
        string story = "", line;
        getline(cin,story);
        int auxChars = 0, auxLines = 1, numPages = 1;

        istringstream is(story);
        vector<string> v;
        while(is>>line) v.push_back(line);

        for(int i = 0; i < v.size(); i++){
            /// somar quantidade atual + proxima + possivel espaco
            if(auxChars + v[i].length() + (auxChars > 0 ? 1 : 0) > charsPerLine){
                if(auxLines == linesPerPage){
                    auxLines = 0;
                    numPages++;
                }
                auxChars = 0;
                auxLines++;
            }
            auxChars += v[i].length() + (auxChars > 0 ? 1 : 0);
        }
        cout << numPages << endl;
    }

    return 0;
}
