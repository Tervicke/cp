#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void setrow(vector<vector<ll>>& a, ll x , ll y){
	ll ans = 0;
	for(ll i = 0 ; i < a[0].size() ; i++){
		if(i != x){
			ans += a[y][i];
		}
	}
	a[y][x] = -1*ans;
}
void setcol(vector<vector<ll>>& a, ll x , ll y){
	ll ans = 0;
	for(ll i = 0 ; i < a.size() ; i++){
		if(i != y){
			ans += a[i][x];
		}
	}
	a[y][x] = -1*ans;
}
void solve() {
	ll n,m;
	cin >> n >> m;
	string path;
	cin >> path;
	vector<vector<ll>> a(n,vector<ll>(m));
	for(ll i = 0 ; i < n ; i++){
		for(ll j = 0; j < m ; j++){
			cin >> a[i][j];
		}
	}
	ll x = 0;
	ll y = 0;
	path += 'D';
	for(ll i = 0 ;i < path.size() ; i++){
		if(path[i] == 'D'){
			setrow(a,x,y);
			y++;
		}else{
			setcol(a,x,y);
			x++;
		}
	}
	for(ll i = 0 ; i < n ; i++){
		for(ll j = 0; j < m ; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
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
