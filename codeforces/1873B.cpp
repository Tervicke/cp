#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = INT_MIN;
	int temp = 1;
	for(int i = 0 ; i < s.size() - 1; i++){
		if(s[i] == s[i+1]){
			temp++;
		}else{
			ans = max(temp,ans);
			temp = 1;
		}
	}
	ans = max(temp,ans);
	cout << ans + 1 << "\n";
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
