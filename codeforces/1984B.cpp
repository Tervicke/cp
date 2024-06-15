#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		string s = to_string(n);
		bool ans = true;
		if(s[0] != '1'){
			cout << "NO" << endl;
			continue;
		}
		if(s[s.size() -1] == '9'){
			cout << "NO" << endl;
			continue;
		}
		for(int i = 1 ; i < s.size() - 1 ; i++){
			if(s[i] == '0'){
				ans = false;
			}
		}
		if(ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
