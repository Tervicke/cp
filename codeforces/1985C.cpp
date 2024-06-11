#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long ar[n];
		long long sum = 0;
		long long ma = -1;
		long long ans = 0;
		for(int i = 0;i < n ; i++){
			long long x;
			cin >> x;
			sum += x;
			ma = max(ma,x);
			if(2 * ma == sum){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
