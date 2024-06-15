#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long x = floor(log2(n));
		cout << (1 << x) << endl;
	}
	return 0;
}
