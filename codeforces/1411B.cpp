#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
bool checkFair(ll n){
	ll dup = n;
	while(n > 0){ 
		int digit = n % 10;
		n/=10;
		if(digit != 0 && dup % digit != 0){return false;}
	}
	return true;
}
void solve(){
	ll n;
	cin >> n;
	ll dup = n;  
	if(checkFair(n)){
		cout << n << "\n";
		return;
	}
	while(!checkFair(n)){
		n++;
	}
	cout << n << "\n";
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
