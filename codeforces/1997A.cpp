#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	string s;
	cin >> s;
	int ins = s.size() -1 ;
	for(int i = 0 ; i < s.size()-1 ; i++){
		if(s[i] == s[i+1]){
			ins = i;
			break;
		}
	}
	for(int i = 0 ; i < s.size() ; i++){
		cout << s[i];
		if(i == ins){
			if(s[i] == 'a'){
				cout << 'b';
			}else{
				cout << 'a';
			}
		}
	}
	cout << '\n';
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

