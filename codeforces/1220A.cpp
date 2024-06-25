#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	map<char,int> m;
	string s;
	cin >> s;
	int total = 0;
	for(int i = 0 ; i < n ; i++){
		m[s[i]]++;
		total++;
	}
	int max_one = m['n'];
	while(max_one--){
		cout << 1 << " ";
	}
	int max_zeros = m['z'];
	while(max_zeros--){
		cout << 0 << " " ;
	}
	cout << endl;
	return 0;
}
