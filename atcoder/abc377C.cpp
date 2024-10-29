#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	ll n,m;
	cin >> n >> m;
	vector<pair<int,int>> valid_moves = {
		{-1,2} , {1,2} ,
		{-1,-2} , {1,-2} ,
		{-2,1} , {2,1},
		{-2,-1} , {2,-1} , 
	};
	set<pair<ll,ll>> occupied_squares;
	for(ll i = 0 ; i < m ; i++){
		ll x,y;
		cin >> x >> y;
		occupied_squares.insert({x-1 , y-1});
		for(auto p : valid_moves){
			ll new_x = p.first + x;
			ll new_y = p.second + y;
			if(new_x >= 1 && new_x <= n && new_y >= 1 && new_y <= n){
				new_x--;
				new_y--;
				occupied_squares.insert({new_x , new_y});
			}
		}
	}
	ll ans = static_cast<ll>(n*n) - size(occupied_squares);
	cout << ans << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
