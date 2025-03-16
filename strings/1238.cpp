#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int t = 0;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    size_t i = 0;
		string s;
		getline(cin,s);
		bool space = false;
		vector<char> s1,s2,r;
		for(char c:s)
		{
		    if(c == ' ') space = true;
		    else if(!space) s1.push_back(c);
		    else s2.push_back(c);
		}
		while(i < s1.size() || i < s2.size())
		{
			if(i < s1.size()) r.push_back(s1[i]);
			if(i < s2.size()) r.push_back(s2[i]);
		    i++;
		}
		for(char c:r) cout<<c;
		cout<<endl;
    }
return 0;
}
