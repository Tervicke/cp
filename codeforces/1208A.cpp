#include <bits/stdc++.h>
using namespace std;

long long f(long long n,long long a,long long b){
	if(n==0){
		return a;
	}
	if(n==1){
		return b;
	}
	if(n==2){
		return a^b;
	}
	return n ^ f(n-1,a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b,n;
		cin >> a >> b >> n;
		cout << f(n,a,b) << endl;
	}
	return 0;
}
