#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,k;
	cin >> m >> n >> k;
	vector<vector<char>> v(m,vector<char>(n));
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> v[i][j];
		}
	}
	vector<vector<char>> ans(m*k,vector<char>(n*k,'$'));
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
				char temp = v[i][j];
				for(int x = k*i ; x < (i+1)*k ; x++){
					for(int y = k*j ; y < (j+1)*k ; y++){
						ans[x][y] = temp;
					}
				}
		}
	}
	for(int i = 0 ; i < m*k ; i++){
		for(int j = 0 ; j < n*k ; j++){
			cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;
}
