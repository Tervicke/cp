#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	int ans = INT_MIN;
	int temp = 1;
	for(int i = 0 ; i < n - 1 ; i++){
		if(v[i+1] - v[i] <= k){
			temp++;
		}else{
			ans = max(ans,temp);
			temp = 1;
		}
	}
	ans = max(ans,temp);
	cout << n - ans<< "\n";
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
