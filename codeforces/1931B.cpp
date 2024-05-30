#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int sum = 0;
		int ar[n];
		for(int i=0;i<n;i++){
				int x;
				cin >> x;
				sum+=x;
				ar[i] = x;
		}
		int m = sum/n;
		int rem =  0;
		string ans = "YES" ;
		for(int i = 0; i < n; i++){
			rem += ar[i]  - m; 
				if( rem < 0 ){
					ans = "NO";
					break;
				}
		}
		cout << ans << endl ;
	}
	return 0;
}
