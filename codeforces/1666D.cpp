#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	string s,t;
	cin >> s >> t;
	vector<int> a(26);
	vector<int> b(26);
	for(int i = 0 ; i < s.size() ; i++){
		a[s[i] - 65]++;
	}
	for(int i = 0 ; i < t.size() ; i++){
		b[t[i] - 65]++;
	}
	for(int i = 0 ; i < 26 ; i++){
		if(a[i] - b[i] < 0){
			cout << "NO\n";
			return;
		}
	}
	for(int i = 0 ; i < 26 ; i++){
		int c = a[i] - b[i];
		if(c == 0){continue;}
		for(int j = 0 ; j < s.size() && c > 0; j++){
			if(s[j] == i+65){
				s.erase(j,1);
				c--;
				j--;
			}
		}
	}
	if(s == t){
		cout << "YES\n";
	}else{
		cout << "NO\n";
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
