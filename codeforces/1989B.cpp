#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	string a;
	string b;
	cin >> a >> b;
	int n = a.size();
	int m = b.size();
	int ans = n + m;
	for(int i = 0; i < m ; i++){
		int j = i;
		for(char c : a){
			if(j < m && b[j]==c) j++;
		}
		ans = min(ans,n+m - (j - i));
	}
	cout << ans <<endl;
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
