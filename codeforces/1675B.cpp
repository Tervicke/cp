#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n; i++){
		cin >> v[i];
	}
	int ans = 0;
	bool pos = true;
	reverse(v.begin(),v.end());
	for(int i = 0 ; i < n - 1 ; i++){
		while (v[i] <= v[i+1] && v[i+1] > 0) {
			v[i+1] /= 2;
			ans++;
		}
		if(v[i] == v[i+1]){
			pos = false;
			break;
		}
	}
	if(pos){
		cout << ans << "\n";
	}else{
		cout << "-1\n";
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
