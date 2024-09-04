#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<vector<int>> ans(n);
	for(int i= 0 ; i < n ; i++){
		string s;
		cin >> s;
		vector<int> temp;
		for(int i = 0 ; i < s.size() ;  i++){
			if(s[i] == '#'){
				temp.push_back(i+1);
			}
		}
		ans.push_back(temp);
	}
	for(auto v : ans){
		for(int e : v){
			cout << e << ' ';
		}
	}
	cout << "\n";
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
