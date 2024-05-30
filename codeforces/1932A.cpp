#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			s+=x;
		}
		for(int i=0;i<s.length(); i++){
			if(s[i] == '@'){
				ans++;
			}
			if(s[i] == '*' && i != s.length() -1 ){
				if(s[i+1] == '*'){
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
