#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,x,y;
	cin >> n >> x >> y;
	int last = -1;
	vector<int> a(n);
	int cur = -1;
	x--,y--;
	for(int i = y - 1 ; i >= 0 ; i--){
		a[i]=cur;
		cur = -cur;
	}
	cur = -1;
	for(int i = x+1 ; i < n ; i++){
		a[i]=cur;
		cur = -cur;
	}
	for(int i = y; i<=x ; i++){
		a[i] = 1;
	}
	for(auto e : a){
		cout << e << ' ';
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
