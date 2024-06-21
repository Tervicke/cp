#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		if(s1.size() > s2.size() ){
			while( s1.size() != s2.size() ){
				s2 = '0' + s2;
			}
		}
		if(s1.size() < s2.size() ){
			while( s1.size() != s2.size() ){
				s1 = '0' + s1;
			}
		}
		bool last_same = false;
		long long ans = 0;
		int k = 0;
		if(s1 == s2){
			cout << 0 << endl;
			continue;
		}
		for(int i = 0 ; i < s1.size() ; i++){
			if(s1[i] != s2[i]){
				ans += abs((s1[i] - '0')  - (s2[i] - '0'));
				k = i + 1;
				break;
			}
		}
		ans += 9*(s1.size() - k);
		cout << ans << endl;
	}
	return 0;
}
