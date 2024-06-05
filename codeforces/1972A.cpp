#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		int b[n+1];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		for(int i = 0 ; i < n ; i++){
			cin >> b[i];
		}
		int ans = 0;
		int diff = 0;
		for(int i = 0 ; i < n ; i++){
			if(a[ i - diff ] > b[i]){
				++ans;
				++diff;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

