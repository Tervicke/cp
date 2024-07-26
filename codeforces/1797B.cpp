#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	vector<vector<int>> v(n,vector<int>(n));

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> v[i][j];
		}
	}
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n; j++){
			if(v[i][j] != v[n-1-i][n-1-j]){
				ans++;
				v[i][j] = v[n-1-i][n-1-j];
			}
		}
	}
	if(ans > k){
		cout << "NO" << endl;
		return;
	}
	if(ans == k){
		cout << "YES" << endl;
		return;
	}
	k-=ans;
	if(n % 2 != 0){
		cout << "YES" << endl;
	}else{
		if(k % 2 == 0){
			cout << "YES"<< endl;
		}else{
			cout << "NO"<< endl;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
