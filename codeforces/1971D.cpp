#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 1;
		int n = -1;
		for(int i = 0 ; i < s.size() - 1 ; i++){
			if(s[i] == '1' && s[i+1] == '0'){
				ans+=1;
			}else if(s[i] == '0' && s[i+1] == '1'){
				n++;
			}
		}
		if(n == -1){
			cout << ans << endl;
		}
		else{
			cout << ans + n << endl;
		}
	}
	return 0;
}
