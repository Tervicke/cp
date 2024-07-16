#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<long long> a(n);
	for(long long i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	long long cnt = 1;
	long long ans = -INT_MAX; 
	while(cnt < n){
		long long mx = -LLONG_MAX;
		long long mn = LLONG_MAX;

		if(n % cnt != 0){
			cnt++;
			continue;
		}

		long long sum = 0;
		for(long long i = 1 ; i <= n ; i++){
			sum += a[i-1];
			if(i % cnt == 0){
				mn = min(sum,mn);
				mx = max(sum,mx);
				sum = 0;
			}
		}
		ans = max(ans,abs(mx-mn));
		cnt++;
	}
	cout << ans << endl;
	return;
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
