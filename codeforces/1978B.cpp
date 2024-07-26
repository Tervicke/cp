#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,a,b;
		cin >> n >> a >> b;

		if(a >= b){
			cout << n*a << endl;
			continue;
		}
		long long k = min(b-a+1,n);
		cout << (b - k + 1) * n + k * (k - 1) / 2 << endl;
	}

	return 0;
}
