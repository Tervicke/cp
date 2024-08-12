#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n;
	cin >> n;
	int adj[n+1][n+1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> adj[i][j];
		}
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1;j<=n;j++){
			if(adj[i][j] == 1 && j != i){
				cout << j << " ";
			}
		}
		cout << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
