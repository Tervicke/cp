#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int c1 = x1 - y1;
	int c2 = x2 - y2;
	if((c1^c2) <0){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
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
