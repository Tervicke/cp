#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int l,r;
	cin >> l >> r;
	int cnt = 0;
	for(int i = l ; i <= r; i++){
		if(i % 2 == 1){
			cnt++;
		}
	}
	cout << cnt/2 << "\n";
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
