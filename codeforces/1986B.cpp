#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		long long a[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m  ; j++){
				long long mx = 0;
				if(i>0){ mx=max(mx,a[i-1][j]); }
				if(i<n-1){ mx=max(mx,a[i+1][j]); }
				if(j<m-1){ mx=max(mx,a[i][j+1]); }
				if(j>0){ mx=max(mx,a[i][j-1]); }
				if(mx < a[i][j]){
					a[i][j] = mx;
				}
			}
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m  ; j++){
					cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
