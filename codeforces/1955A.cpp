#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,a,b;
	cin >> n >> a >> b;
	if(n % 2 == 0){
		cout << min((n/2 * b),n*a) << endl;
	}else {
		cout << min( (n-1)/2*b + a, n * a) << endl;
	}
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
