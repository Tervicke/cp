#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,q;
	cin >> n >> q;
	vector<int> v(n,1);
	for(int i = 0 ;i < q ; i++){
		int x;
		cin >> x;
		v[x-1] *= -1;
	}
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(v[i] > 0){
			ans++;
		}
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

