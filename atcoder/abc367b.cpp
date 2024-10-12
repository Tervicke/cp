#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	string s;
	cin >> s;
	reverse(s.begin(),s.end());
	int index = 0;
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] != '0'){
			break;
		}
		index++;
	}
	reverse(s.begin(),s.end());
	string ans = s.substr(0,s.size() - index);
	if(ans[ans.size()-1] == '.'){
		ans.pop_back();
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
