#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
int countOddNumbers(int k, int n) {
    if (k > n) {
        return 0;
    }
    if (k % 2 == 0) {
        k++;
    }
    if (n % 2 == 0) {
        n--;
    }
    if (k > n) {
        return 0;
    }
    return (n - k) / 2 + 1;
}

void solve(){
	ll n,k;
	cin >> n >> k;
	if(n <= k){
		k = 1;
	}else{
	 k = n - k + 1; 
	}
	if(k % 2 == 0){
		k++;
	}
	if(n % 2 == 0){
		n--;
	}
	ll ans = countOddNumbers(k,n);
	if(ans % 2 == 0){
		cout << "YES\n";
	}else{
		cout << "NO\n";
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
