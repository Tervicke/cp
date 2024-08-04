#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int a,b;
	cin >> a >> b;
	int ans = 0;
	for(int i = 0 ; i < 32 ; i++){
		if( (a & (1 << i)) != (b & (1 << i)) ){
			ans += (1ll << i);
		}
	}
	cout << ans << "\n";
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

