#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(v[0] != 1){
		cout << "NO\n";
	}else{
		cout << "YES\n";
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
