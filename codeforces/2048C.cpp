#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
string xorvalue(string s1 , string s2){
	string ans = "";
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(int i = 0; i < s1.size(); i++) {
		char a = s1[i];
		char b = (i >= s2.size() ? '0' : s2[i]);
		if (a == b) {
				ans += '0';
		} else {
				ans += '1';
		}
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

void solve() {
	string s;
	cin >> s;
	int ct = 0;
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] == '0'){
			ct = i;
			break;
		}
	}
	int x=1;
	int y=1;
	string ans = "0";
	ct = s.size() - ct;
	if(ct != s.size()){
		string substr;
		for(int i = 0 ; i < s.size() ; i++){
			substr = xorvalue( s, s.substr(i,ct));
			if(substr > ans){
				ans = substr;
				x = i+1;
				y = i+ct;
			}
		}
	}
	cout << 1 << " " << s.size() << " " << x << " " << y << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
