#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < s.size() ; i++){
			if(s[i] == '?'){
				if(i==0){
					s[i] = '0';
				}else if(i==s.size() - 1){
					s[i] = '1';
				}else{
					s[i] = s[i-1];
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
