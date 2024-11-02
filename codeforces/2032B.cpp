#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,k;
	cin >> n >> k;
	if(n == 1){
		cout << "1\n1\n";
		return;
	}
	if(k == n || k == 1){
		cout << -1 << "\n";
	}else{
		cout << "3\n";
		if(k % 2 == 0){
			cout << 1 << " " << k << " " << k+1 << "\n";
		}else{
			cout << 1 << ' ' << k - 1 << " " << k + 2 << "\n";
		}
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

