#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n;
	cin >> n;
	vector<int> p(n+1);
	string s;
	for(int i = 1 ; i <= n ; i++){
		cin >> p[i];
	}
	cin >> s;
	vector<vector<int>> areas;
	vector<int> ans;
	vector<bool> vis(n+1,false);
	vector<int> temp;
	s = 'x' + s;
	for(int i = 1 ; i <= n ; i++){
		int x = i;
		temp.clear();
		int count = 0;
		if(vis[x]) continue;
		while(!vis[x]){
			vis[x] = true;
			if(s[x] == '0'){count++;}
			x = p[x];
			temp.push_back(x);
		}
		areas.push_back(temp);
		for(auto e : temp){
			p[e] = count; 
		}
	}
	for(int i = 1 ; i <= n ; i++){
		cout << p[i] << " ";
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
