#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int ar[n];
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> ar[i];
		}
		for(int i = 0 ; i < m ; i++){
			int x;
			cin >> x;
			for(int j = 0 ; j < n ; j++){
				if(ar[j] + x <= k){
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
