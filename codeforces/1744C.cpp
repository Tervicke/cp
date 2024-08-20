#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	char c;
	cin >> c;
	string s;
	cin >> s;
	s+=s;
	int dist = -1e9;
	int ans = 0;
	for(int i = 2*n - 1 ; 0 <= i ; i--){
		if(s[i] == 'g'){
			dist = 0;
		}
		if(s[i] == c){
			ans = max(ans,dist);
		}
		dist++;
	}
	cout << ans << "\n";
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
