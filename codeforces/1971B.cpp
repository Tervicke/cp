#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		set<char> se;
		for(char c:s){
			se.insert(c);
		}
		if(se.size() == 1){
			cout << "NO" << endl;
			continue;
		}
		cout << "Yes" << endl;
		cout << s[s.size()-1];
		for(int i = 0 ; i < s.size() - 1; i++){
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
