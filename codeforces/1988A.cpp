#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	int k;
	cin >> n >> k;
	int ans = (n - 1 + k - 2) / (k - 1);
	cout<< ans << endl;
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
