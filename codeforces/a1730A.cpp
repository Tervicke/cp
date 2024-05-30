#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , c;
		cin >> n >> c;
		int ma = 0;
		map <int , int> m;
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			ma = max(ma,x);
			m[x]++;
		}
		for(auto &pr : m){
			if(pr.second >= c){
				ans+=c;
			}else{
				ans+=pr.second;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
