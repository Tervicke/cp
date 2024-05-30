#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long ans = 0;
		long long k=n;
		while(n!=0){
			if(n >= 15){
				n=n-15;
			}
			else if(n>=10){
				n=n-10;
			}
			else if(n>=6){
				n=n-6;
			}
			else if(n>=3){
				n=n-3;
			}
			else{
				n=n-1;
			}
			ans++;
		}
		cout << ans - abs(ans-k%10) << endl;
	}
	return 0;
}
