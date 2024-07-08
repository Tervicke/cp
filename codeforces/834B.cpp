#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	string s="";
	map<char,int> m;
	for(int i = 0; i < n ; i++){
		char c;
		cin >> c;
		m[c]=i+1;
		s+=c;
	}
	set<char> se;
	for(int i = 0 ; i < s.size() ; i++){
		char c = s[i];
		se.insert(c);
		if(se.size() > k){
			cout << "YES" << endl;
			return 0;
		}
		if(m[c] == i+1){
			se.erase(c);
		}
	}
	cout << "No" << endl;
	return 0;
}
