#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int,int> m;
		for(int i = 0 ; i < n ; i++  ){
			int x;
			cin >>x;
			m[x]++;
		}
		int ans = 0;
		for(auto pair:m){
			if(pair.second == 2)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
