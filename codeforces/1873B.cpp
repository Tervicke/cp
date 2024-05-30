#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		int p = 1;
		int m = 10e5;
		int t = 0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			m = min(m,x);
			if(x==0){
				t=1;
			}else{
				p*=x;
			}
		}
		if(t==1){
			cout << p << endl;
		}else{
			cout << (p/m)*(m+1) << endl;
		}
	}
	return 0;
}
