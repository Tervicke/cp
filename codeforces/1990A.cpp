#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ;i++){
		cin >> v[i];
	}
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		m[v[i]]++;
	}
	bool flag = false;
	for(auto p: m){
		if(p.second%2 == 1){
			flag = true;
			break;
		}
	}
	if(flag){
		cout << "YES"<< endl;
	}else{
		cout << "NO" << endl;
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
