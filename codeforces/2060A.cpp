#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//all the best
const long long mod = 10e9 + 7;
int checkfib(vector<int>& v){
	int ans = 0;
	for(int i = 0 ; i < 5 - 2; i++){
		if(v[i+2] == v[i] + v[i+1]){
			ans++;
		}
	}
	return ans;
}
void solve() {
	vector<int> v(5);
	for(int i = 0 ; i < 5 ; i++){
		if(i != 2)
		cin >> v[i];
	}
	int mx = max(v[0] + v[1] , v[3] - v[1]);
	int mn = min(v[0] + v[1] , v[3] - v[1]);
	int ans = 0;
	for(int i = mx ; i >= mn ; i--){
		v[2]=i;
		ans = max(ans , checkfib(v));
	}
	cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}

