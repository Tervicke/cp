#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	string s1;
	string s2;
	cin >> s1 >> s2;
	int ans = 0;
	for(int i = 0 ; i < static_cast<int>(min(s1.size(),s2.size())) ; i++){
		if(s1[i] != s2[i]){
			ans = i + 1;
			break;
		}
	}
	if(s1.size() != s2.size() && ans == 0){
		cout << min(s1.size(),s2.size()) +1 << "\n";
		return;
	}
	cout << ans << "\n";
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
