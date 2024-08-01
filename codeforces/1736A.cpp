#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	pair<int,int> cnt;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		cnt.first+=a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
		cnt.second+=b[i];
	}
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum += a[i] ^ b[i];
	}
	int ans = abs(cnt.first - cnt.second);
	cout << min(ans+1,sum) << "\n";
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
