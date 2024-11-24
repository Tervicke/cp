#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n,m,l;
	cin >> n >> m >> l;
	vector<pair<int,int>> v; //{hurdle_start , jump_power_to_clear_hurdle};
	for(int i = 0 ; i < n ; i++){
		int l,r;
		cin >> l >> r;
		v.push_back({l,r-l + 2});
	}
	vector<pair<int,int>> power_up;
	for(int i = 0 ; i < m ; i++){
		int x,v;
		cin >> x >> v;
		power_up.push_back({x,v});
	}
	int current_hurdle = 0;
	int current_powerup = 1;
	int current_powerup_pointer = 0;
	priority_queue<int> q;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		while(current_powerup_pointer < power_up.size() && power_up[current_powerup_pointer].first <= v[i].first){
			q.push(power_up[current_powerup_pointer].second);
			current_powerup_pointer++;
		}

	//	if(i == v[current_hurdle].first){
			int need_powerup =  v[i].second;
			while(need_powerup > current_powerup){
				if(q.empty()){
					cout << "-1\n";
					return;
				}
				current_powerup += q.top();
				q.pop();
				ans++;
			}
			
		// }

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
