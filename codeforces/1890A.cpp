#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	map<int,int> m;
	set<int> s;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		m[x]++;
		s.insert(x);
	}
	if(s.size() == 1){
		cout << "YES\n";
	}else if(s.size() <= 2){
		vector<int> v;
		for(auto p : m){
			v.push_back(p.second);
		}
		if(abs(v[0] - v[1]) == 1 || v[0] - v[1] == 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}else{
		cout << "NO\n";
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
