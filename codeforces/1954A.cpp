#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int s= ceil((double)n/m);
		int r = n - s;
		if(m==1){
			cout << "No" << endl;
			continue;
		}
		if(r <= k){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
