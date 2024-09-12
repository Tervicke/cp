#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,k;
	cin >> n >> k;
	if(n % k != 0){
		cout << "1\n" << n << "\n";
	}else{
		cout << "2\n" << n-1 << ' ' << "1\n";
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
