#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,x;
		cin >> n;
		long long sum=0;
		for(int i=0;i<n;i++){
			cin >> x;
			sum+=x;
		}
		long double s  = sqrt(sum);
		if(trunc(s) - s == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
