#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	int ans;
	if(n % 2 == 0){
		sort(v.begin(),v.end() , greater<int>());
		ans = v[0] + n/2;
	}else{
		int max_odd = INT_MIN;
		int max_even = INT_MIN;
		for(int i = 0 ; i < n ; i++){
			if(i % 2 == 1){
				max_odd = max(max_odd , v[i]);
			}else{
				max_even = max(max_even , v[i]);
			}
		}
		ans = max(max_odd + (n-1)/2 , max_even + (n+1)/2);
	}
	cout << ans <<"\n";
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
