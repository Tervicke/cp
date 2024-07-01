#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	for(int i = 0 ; i < n ; i++){
		if(i == 0){
			ans+= s[i];
		}else if(i % 2 == 1){
			if(n % 2 == 0){
				ans = ans + s[i];
			}else{
				ans = s[i] + ans;
			}
		}else{
			if(n % 2 == 0){
				ans = s[i] + ans;
			}else{
				ans = ans + s[i];
			}
		}
	}
	cout << ans << endl;
	return 0;
}
