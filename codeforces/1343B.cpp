#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	if((n / 2) % 2 != 0){
		cout << "NO" << endl;
		return;
	}else{
		cout << "YES" << endl;
		for(int i = 1; i <= n/2 ; i++){
			cout << i*2<< " ";
		}
		int cnt = 1;
		for(int i = 0 ;i  < n/2 ; i++ ){
			if(i == n/2 - 1){
				cout << n + n/2  - 1;
			}else{
				cout << cnt << " ";
				cnt+=2;
			}
		}
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
