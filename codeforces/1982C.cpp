#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,l,r;
	cin >> n >> l >> r;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int sum = 0 , j = 0 ,ans =0;
	for(int i = 0 ; i < n;i++){
		sum += a[i];

		while(sum > r && j <= i){
			sum -=a[j];
			j++;
		}
		
		if(sum >= l && sum <= r){
			sum = 0;
			ans++;
			j = i + 1;
		}
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
