#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int a[3];
	int n;
	cin >> a[0] >> a[1] >> a[2] >> n; 
	sort(a,a+3);
	n -= a[2] - a[0];
	if(n < 0){
		cout << "NO" << endl;
		return;
	}
	n -= a[2] - a[1];
	if(n < 0){
		cout << "NO" << endl;
		return;
	}
	if( n % 3 != 0 ){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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
