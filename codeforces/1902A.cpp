#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool flag = false;
		int z = 0;
		for(int i = 0 ; i < n ; i++){
			if(s[i] == '0')
				z++;
		}
		if(z > n - z ){
			cout << "YES" << endl;
			continue;
		}
		for(int i = 0 ; i < n - 1 ; i++){
			if(s[i] != s[i+1]){
				flag = true;
				break;
			}
		}
		if(flag){
			cout << "YES" << endl;
		}else
			cout << "No" << endl;
	}
	return 0;
}
