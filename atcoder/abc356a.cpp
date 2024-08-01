#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,l,r;
	cin >> n >> l >> r;
	for(int i = 1 ; i <= l-1 ; i++){
		cout << i << ' ';
	}
	for(int i = r ; i >= l; i--){
		cout << i << " ";
	}
	for(int i = r+1 ; i <= n ; i++){
		cout << i << " ";
	}
	cout << "\n";
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
