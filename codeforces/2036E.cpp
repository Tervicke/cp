#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	int n,k,q;
	cin >> n >> k >> q;
	vector<vector<int>> initial(n,vector<int>(k));
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < k ; j++){
			cin >> initial[i][j];
		}
	}

	vector<vector<int>> final_config(k,vector<int>(n));
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < k ; j++){
			final_config[j][i] = initial[i][j];
		}
	}

	for(int i = 0 ; i < k ; i++){
		for(int j = 1 ; j < n ; j++){
			final_config[i][j] = final_config[i][j-1] | final_config[i][j];
		}
	}
	while(q--){
		int m;
		cin >> m;
		int high = n;
		int low = 0;
		while(m--){
			int region, limit;
			char sign;
			cin >> region >> sign >> limit;
			region--;
			vector<int> region_vector = final_config[region];
			if(sign=='>'){
				low = max(low,int(upper_bound(region_vector.begin(),region_vector.end(),limit) - region_vector.begin()));
			}else{
				high = min(high,int(lower_bound(region_vector.begin(),region_vector.end(),limit) - region_vector.begin()));
			}
		}
		if(low >= high){
			cout << -1 <<"\n";
		}else{
			cout << low+1 << "\n";
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
