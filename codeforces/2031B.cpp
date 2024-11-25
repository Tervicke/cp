#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n+1);
	for(int i = 1 ; i <= n ; i++){
		cin >> v[i];
	}
	bool pos = true;
	for(int i = 1 ; i <= n ; i++){
		if(i == 1){
			if(v[i] != 1 && v[i] != 2){
				pos = false;
				break;
			}
			continue;
		}
		if(i == n){
			if(v[i] != n && v[i] != n - 1){
				pos = false;
				break;
			}
		}
		if(v[i] != i + 1 && v[i] != i - 1 && v[i] != i){
			pos = false;
			break;
		}
	}
	cout << (pos ? "YES" : "No") << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
