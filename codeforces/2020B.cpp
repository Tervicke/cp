#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	ll k;
	cin >> k;
	ll left= 0;
	ll right = LLONG_MAX;
	ll result = LLONG_MAX;
	while(left < right){
		ll mid = (left + right) / 2;
		ll bulbs = mid - int(sqrtl(mid));
		if(bulbs == k){
			result = min(result,mid);
			right = mid;
		}else if(bulbs > k){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	cout << left << "\n";
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
