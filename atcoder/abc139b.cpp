#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int a,b;
	cin >> a >> b;
	int x = 1;
	int ans = 0;
	while(x < b){
		x--;
		x+=a;
		ans++;
	}
	cout << ans << endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
