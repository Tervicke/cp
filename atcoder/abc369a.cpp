#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int a,b;
	cin >> a >> b;
	int ans = 2;
	if((a + b) % 2 == 0){
		ans++;
	}
	if(a == b){
		ans-=2;
	}
	cout << ans << "\n";
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
