#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(n == 2){
		sort(v.begin(),v.end());
		cout << v[0] << endl;
		return;
	}
	int ans = INT_MIN;
	for(int i = 0 ; i < n - 2; i++){
		int a[] = {v[i] , v[i+1] , v[i+2]};
		sort(a,a+3);
		ans = max(ans,a[1]);
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

