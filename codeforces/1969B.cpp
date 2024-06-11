#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long ans = 0;
		long long last = 0;
		bool f1 = false;
		bool fans = 0;

		for(int i = 0; i < s.size();i++){
			if(s[i] == '1' && !f1){
				f1 = true;
				last = i-1;
			}
			if(s[i] == '0'){
				if(f1){
					ans += i - last;
					last++;
				}
			}

		}
		cout << ans << endl;
	}
	return 0;
}
