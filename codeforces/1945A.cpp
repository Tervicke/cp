#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b,c;
		cin >> a >> b >> c;
		long long ans = 0;
		ans += a;
		if(b % 3 == 0){
			ans += b/3;
			ans += ceil((double)c / 3);
		}else{
			long long n = 3 - (b % 3) ;
			if(n > c){
				cout << -1 << endl;
				continue;
			}else{
				c -= n;
				ans += ceil(double(b+n) / 3);
				ans += ceil(double(c) / 3);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
