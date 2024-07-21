#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int x,y;
	cin >> x >> y;
	cout << (x - y) * 2 << endl;
	for(int i = x ; i >= y ; i--){
		cout << i << " ";
	}
	for(int i = y + 1 ; i < x ; i++){
		cout << i << " ";
	}
	cout << endl;
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
