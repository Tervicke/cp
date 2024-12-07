#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,d;
	cin >> n >> d;
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '.'){
			ans++;
		}
	}
	cout << ans + d << endl;
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
