#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	map<string,int> m;
	m["chest"] = 0;
	m["biceps"] =0 ;
	m["back"] =0 ;
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		int x;
		cin >> x;
		if(i % 3 == 1){
			m["chest"]+=x;
		}
		else if(i % 3 == 2){
			m["biceps"]+=x;
		}else{
			m["back"]+=x;
		}
	}
	string ans = "";
	int mx = -1;
	for(auto p : m){
		if(p.second> mx){
			ans = p.first;
			mx = p.second; 
		}
	}
	cout << ans << endl;
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
