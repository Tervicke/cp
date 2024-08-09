#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	string s,t;
	cin >> s;
	cin >> t;
	int i=0 , j = 0;
	vector<int> ans;
	while(i < t.size() && j < s.size()){
		if(t[i] == s[j]){
			j++;
			ans.push_back(i+1);
		}
		i++;
	}
	for(auto &x : ans){
		cout << x << ' ';
	}
	cout << "\n";
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

