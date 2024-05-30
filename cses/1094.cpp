#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long ar[n];
	long long ans=0;
	for(int i=0;i<n;i++){
		cin >> ar[i];
	}
	for(int i=0;i<n-1;i++){
		if(ar[i] > ar[i+1]){
			long long res = ar[i] - ar[i+1];
			ans += res;
			ar[i+1]+= res;
		}
	}
	if(ar[n-1] < ar[n-2] && n!=1){
		ans += ar[n-1] - ar[n-2];
	}
	cout << ans ;
	return 0;
}
