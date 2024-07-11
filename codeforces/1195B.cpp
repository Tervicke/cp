#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin >> n >> k;
	long long cb = 0;
	long long ce = 0;
	long long count = 0;
	if(k == n*(n+1)/2	){
		cout << 0 << endl;
		return 0;
	}	
	if(k == 0){
		long long c = 0;
		while(c*(c+1)/2 != n-c){
			c++;
		}
		cout << n - c << endl;
		return 0;
	}
	while((count*(count+1))/2 - (n - count) != k){
		count++;
	}
	cout << n - count << endl;
	return 0;
}
