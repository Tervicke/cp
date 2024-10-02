#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	ll a,b,c;
	cin >> a >> b >> c;
	ll ma = b - (c - b); 
	ll mc = b  + (b - a); 
	ll mb = a + (c - a)/2;
	if(ma >= a && ma % a == 0 && a != 0){
		cout << "YES\n";
		return;
	}
	if(mb >= b && (c-a)%2 == 0 && mb % b == 0 && b != 0){
		cout << "YES\n";
		return;
	}
	if(mc >= c && mc % c == 0 && c != 0){
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
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
