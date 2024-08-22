#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n;
	cin >> n;
	int x = 0 , y = 0 , z = 0;
	for(int i = 0 ; i <= n ; i++){
		for(int j = 0 ; j <=n ; j++){
			for(int k = 0 ; k <= n ; k++){
				if(i + j + k <= n){
					cout << i << ' ' << j << ' ' << k << "\n";
				}
			}
		}
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
