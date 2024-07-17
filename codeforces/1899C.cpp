#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int ans = a[0];
	int sum = a[0];
	int mn = min(0,a[0]);
	for (int i = 1; i < n; i++) {
		if(abs(a[i] % 2) == abs(a[i-1] % 2)){
			sum = 0;
			mn = 0;
		}
		sum += a[i];
		ans = max(ans,sum-mn);
		mn = min(mn,sum);
  }
	cout << ans << endl;
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
