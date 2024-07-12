#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin >> n;
	long long a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	long long ans=-1;
	long long mx = 0;
	long long to = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] > mx){
			mx = a[i];
		}else{
			long long c = mx - a[i];
			ans += c; 
			to = max(to,c);
		}
	}
	cout << ans + to + 1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
