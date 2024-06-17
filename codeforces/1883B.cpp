#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		map<char,int> m;
		for(int i = 0 ;i<n;i++){
			m[s[i]]++;
		}
		int odd= 0;
		for(auto p:m){
			if(p.second % 2 != 0){
				odd++;
			}
		}
		if(odd <= k + 1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
