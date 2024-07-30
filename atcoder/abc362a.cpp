#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int r,b,g;
	cin >> r >> g >> b;
	string s;
	cin >> s;
	if(s == "Blue"){
		cout << min(g,r) << endl;
	}else if( s=="Red" ){
		cout << min(g,b) << endl;
	}else{
		cout << min(r,b) << endl;
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
