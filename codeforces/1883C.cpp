#include <bits/stdc++.h>
using namespace std;
int fc(int a[],int n,int k){
	int ans = INT_MAX;
	long long p = 1;
	for(int i = 0 ; i < n ; i++){
		int x = a[i];
		if(x % k != 0)
			ans = min(ans,k - (x % k));
		else{
			ans = 0;
			break;
		}
	}	
	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int ar[n];
		for(int i = 0;i<n;i++){
			cin >> ar[i];
		}
		int ans;
		if(k==4){
			int cnte = 0;	
			for(int i = 0 ; i < n ; i++){
				if(ar[i]%2 == 0)
					cnte++;
			}
			if(cnte >= 2){
				ans = 0;
			}else{
				ans = 2 - cnte;
			}
			ans = min(ans,fc(ar,n,4));
		}
		else{
			ans = fc(ar,n,k);
		}
		cout << ans << endl;
	}
	return 0;
}
