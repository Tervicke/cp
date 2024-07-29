#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int r;
	cin >> r;
	if(r < 100){
		cout << 100 - r << endl;
	}
	else if(r < 200){
		cout << 200 - r << endl;
	}
	else if(r < 300){
		cout << 300 - r << endl;
	}else{
		cout << 400 - r << endl;
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
