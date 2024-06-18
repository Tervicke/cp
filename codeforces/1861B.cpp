#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1;
		cin >> s2;
		bool ans = false;
		for(int i=1;i < s1.size() ; i++){
			if(s1[i-1] == '0' && s1[i] == '1' && s2[i-1] == '0' && s2[i] == '1'){
				ans = true;
				break;
			}
		}
		if(ans){
			cout << "YES" << endl;
		}else
			cout << "NO" << endl;
		
	}
	return 0;
}
