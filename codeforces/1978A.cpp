#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 0;
		int mx = -1;
		for(int i = 0 ; i < n-1 ; i++){
			int x;
			cin >> x;
			mx = max(mx,x);
		}
		int x;
		cin >> x;
		ans+=x;
		ans+=mx;
		cout << ans << endl;
	}
	return 0;
}
