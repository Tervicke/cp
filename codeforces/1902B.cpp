#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	ll n,p,l,t;
	cin >> n >> p >> l >> t;
	int c = ceil(n/7.0); 
	int left = 0;
	int right = n;
	int days;
	while(left<=right){
		int m = (left + right) / 2;
		if(m*l + min(2*m,c)*t >= p){
			days = m;
			right = m - 1;
		}else{
			left = m + 1;
		}
	}
	cout << n - days << endl;
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
