#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	long long n,m;
	cin >> n >> m;
	vector<int> a(n,0);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	long long ans = 0;
	long long sum = 0;
	for(long long l = 0 , r = 0 ; l < n ;){
		while(r<n && a[r]- a[l] <= 1 && sum + a[r] <= m){
			sum += a[r];
			r++;
		}
		ans = max(sum,ans);
		sum -= a[l];
		l++;
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
