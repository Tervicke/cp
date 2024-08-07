#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	string s;
	string t;
	cin >> s >> t;
	int i = 0 , j = 0;
	string ans = s;
	while(i < s.size() && j < t.size()){
		if(s[i] == t[j] || s[i] == '?'){
			if(s[i] == '?'){
				ans[i] = t[j];
			}			
			j++;
		}
		i++;
	}
	for(char &c : ans){
		if(c == '?'){
			c ='a';
		}
	}
	
	if(j == t.size()){
		cout << "Yes\n";
		cout << ans << "\n";
	}else{
		cout << "No\n";
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

