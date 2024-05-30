#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	for(int i = 1 ;i <= t;i++){
		if(i == 1){
			cout << 0 << endl;
		}
		else if(i  == 2){
			cout << 6 << endl;
		}
		else{
			long long n = i*i;
			long long ans = (  n*(n-1) ) / 2 -  4*((i-1)*(i-2));
			cout << ans << endl;
 		}
	}
	return 0;
}
