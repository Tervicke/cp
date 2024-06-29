#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a_odd = 0;
		long long a_even = 0;
		for(int i = 0 ; i < n;i++ ){
			int x;
			cin >> x;
			if(x % 2 == 0){
				a_even++;
			}else{
				a_odd++;
			}
		}
		int m ;
		long long b_even = 0;
		long long b_odd = 0;
		cin >> m;
		for(int i = 0 ; i  < m ; i++){
			int x;
			cin >> x;
			if(x % 2 == 0){
				b_even++;
			}else{
				b_odd++;
			}
		}
		long long ans = 0;
		ans += a_even * b_even;
		ans += a_odd * b_odd;
		cout << ans << endl;
	}
	return 0;
}
