#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	int d[] = {0,1,2,0,1,0,0,1};
	if(n <= 7){
		cout << d[n] << endl;
	}else{
		cout << 0 << endl;
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
