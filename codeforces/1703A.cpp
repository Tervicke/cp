#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's')
			cout << "YES" << endl;
		else
		cout << "No" << endl;
	}
	return 0;
}
