#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int x,y;
	cin >> x >> y;
	if(x == 0 && y == 0){
		cout << 1 << endl;
		return;
	}
	if(x == 0){
		cout << y-1 << endl;
	}else if(y == 0){
		cout << x-1 << endl;
	}else{
		cout << x << endl;
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

