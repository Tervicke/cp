#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string ans;
	for(int i=0;i<s.length();i++){
			if(i+2<s.length() && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
					
			}
			else if(i+2<s.length() && s[i-1]=='W' && s[i]=='U' && s[i+1]=='B'){
					
			}
			else if(i+2<s.length() && s[i-2]=='W' && s[i-1]=='U' && s[i]=='B'){
					
			}
			else{
				ans+=s[i];
			}
	}
	cout << ans;
	return 0;
}
