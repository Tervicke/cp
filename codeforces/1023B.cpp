#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin >> n >> k;
	if(k > n + n - 1){
		cout << 0 << endl;
		return 0;
	}
	long long total = (k - 1) / 2 ;
	if(k <= n){
		cout << total << endl;
	}else{
		cout << total - (k - n) + 1 << endl;
	}
	return 0;
}
