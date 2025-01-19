#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//all the best
const long long mod = 10e9 + 7;
void solve() {
	int n;
	int m;
	cin >> n >> m;
	vector<vector<int>> v(n,vector<int>(m)); 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> v[i][j];
		}
	}
	for(auto& s : v){
		sort(s.begin(),s.end());
	}
	bool pos = true;
	for(auto s : v){
		for(int i = 0 ; i < m - 1 ; i++){
			if(s[i+1] - s[i] != n){
				pos = false;
				break;
			}
		}
	}
	if(!pos){
		cout << "-1\n";
		return;
	}
	map<int,int> mp;
	for(int i = 0 ; i < n ; i++){
		mp[v[i][0]] = i;
	}
	for(auto p : mp){
		cout << p.second + 1 << " ";
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

