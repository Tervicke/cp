#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long val = static_cast<long long>(sqrtl(n));
		if(val*val == n){
			cout << val - 1<< endl;
		}
		else{
			cout << val << endl;
		}
	}
	return 0;
}

