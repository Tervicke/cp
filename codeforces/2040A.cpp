#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ;i < n ; i++){
		cin >> a[i];
	}
	int ans = 0;
	bool pos = true;
	for(int i = 0 ; i < n ; i++){
		pos = true;
		for(int j = 0 ;j < n ; j++){
			if(i == j){continue;}
			if(abs(a[i] - a[j]) % k == 0){
				pos = false;
				break;
			}
		}
		if(pos){
			ans = i+1;
			break;
		}
	}
	if(pos){
		cout <<"Yes\n" << ans << "\n";
	}else{
		cout << "No\n";
	}
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
