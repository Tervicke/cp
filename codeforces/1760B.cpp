#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 0;
		for(int i = 0 ; i < n ;i++){
			char x;
			cin >> x;
			if(x - 96 > ans){
				ans = x - 96;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

