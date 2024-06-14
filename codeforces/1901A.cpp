#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int ar[n];
		for(int i = 0 ; i < n ; i++ ){
			cin >> ar[i];
		}
		int ma = ar[0];
		for(int i = 0 ; i < n - 1; i++){
			ma = max(ma,ar[i+1] - ar[i]);
		}
		ma = max(ma , (x-ar[n-1])*2);
		cout << ma << endl;
	}
	return 0;
}
