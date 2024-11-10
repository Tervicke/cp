#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string r;
	cin >> r;
	int zero = 0;
	for(int i = 0 ; i < s.size() ; i++){
		zero += (s[i] == '0');
	}
	int one = n - zero;
	bool pos = true;
	for(int i = 0 ; i < n - 1; i++){
		int c = r[i];
		if(zero == 0 || one == 0){
			pos = false;
			break;
		}
		if(c == '0'){one--;}
		else{zero--;}
	}
	cout << (pos ? "YES" : "NO") << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
