#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int a,b;
	cin >> a >> b;
	int ans = INT_MAX;
	for(int i = a;i<=b;i++){
		ans = min(ans,(i - a) + (b - i));
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
