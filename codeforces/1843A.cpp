#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >> n;
		long long k = floor( log2(n) );
		long long ans = n;
		for(int i = 0 ; i < k ; i++){
			n = floor(n/2);
			ans += n;
		}
		cout << ans << endl;
	}
	return 0;
}
