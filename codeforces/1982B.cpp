#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	long long x,y,k;
	cin >> x >> y >> k;
	while(k > 0 && x!=1){
		long long c = y - (x % y);
		if(c >= k){
			x+=k;
			k=0;
		}else{
			x+=c;
			k-=c;
		}
		while(x % y == 0){
			x = x / y;
		}
	}
	cout << (k%(y - 1))+x << endl;
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
