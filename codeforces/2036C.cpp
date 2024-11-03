#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	string s;
	cin >> s;
	int q;
	cin >> q;
	s = "XXX" + s + "XXX";
	int count = 0;
	for(int i = 0 ; i < s.size() - 3; i++){
		if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'){
			count++;
		}
	}
	while(q--){
		int i,v;
		cin >> i >> v; 
		i = i+2;
		char c = (v == 0) ? '0' : '1';
		//assume 1000
		string x1 = string(1, c) + s.substr(i + 1, 3);
		string x2 = s.substr(i - 1, 1) + string(1, c) + s.substr(i + 1, 2);
		string x3 = s.substr(i - 2, 2) + string(1, c) + s.substr(i + 1, 1);
		string x4 = s.substr(i - 3, 3) + string(1, c);
		
		string dx1 = s.substr(i, 4);
		string dx2 = s.substr(i - 1, 4);
		string dx3 = s.substr(i - 2, 4);
		string dx4 = s.substr(i - 3, 4);
		if(dx1 == "1100" && x1 != "1100"){
			count--;
		}else if(dx1 != "1100" && x1 == "1100"){
			count++;
		}

		if(dx2 == "1100" && x2 != "1100"){
			count--;
		}else if(dx2 != "1100" && x2 == "1100"){
			count++;
		}

		if(dx3 == "1100" && x3 != "1100"){
			count--;
		}else if(dx3 != "1100" && x3 == "1100"){
			count++;
		}

		if(dx4 == "1100" && x4 != "1100"){
			count--;
		}else if(dx4 != "1100" && x4 == "1100"){
			count++;
		}

		if(count > 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
		s[i] = c;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
