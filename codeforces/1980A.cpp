#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n , m;
		cin >> n >> m;
		int ar[7]={0};
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			ar[x - 65]++;
		}
		for(int i =0 ; i < 7 ; i++){
			if(ar[i] < m){
				ans += m - ar[i];
			}
		}
		cout << ans << endl;
	}
}
