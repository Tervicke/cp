#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		long long ans = 0;
		int count = 0;
		while(n>0){
			if(ans%k==0){
				n--;
			}
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
