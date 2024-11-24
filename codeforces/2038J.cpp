#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n;
	int p = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		char e;
		int v;
		cin >> e >> v;
		if(e == 'P'){
			p+=v;
		}else{
			if(p >= v){ // 7 5
				cout << "NO\n";
				p = p - v;
			}else{ // 5 7
				cout << "YES\n";
				p = 0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = false;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
