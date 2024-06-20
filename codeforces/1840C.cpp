#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k,q;
		cin>> n >> k >>q;
		long long cnt = 0;
		long long ans =0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;

			if(x <= q){
				cnt++;
				long long r = cnt - k + 1;
				if(r > 0){
					ans +=r;
				}
			}else{
				cnt = 0;
			}

		}
		cout << ans << endl;
	}
	return 0;
}
