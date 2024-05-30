#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin >> ar[i];
		}
		sort(ar , ar +n );
		int ans = 0;
		for(int i=1;i<=n;i++){
			if(i==n)
				break;
			ans += ar[i] - ar[i-1] ;
		}
		cout << ans << endl;
	}
	return 0;
}
