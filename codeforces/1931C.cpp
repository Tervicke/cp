#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		for(int i = 0 ; i < n ; i++){
			cin >> ar[i];
		}
		int f=0;
		int l=0;
		for(int i = 0 ; i < n ; i++){
			if(ar[0] == ar[i] ){
				f++;
			}else{
				break;
			}
		}
		reverse(ar,ar+n);
		for(int i = 0 ; i < n ; i++){ 
			if(ar[0] == ar[i] ){
				l++;
			}else{
				break;
			}
		}
		if(ar[0] == ar[n-1]){
			if(l==f && l==n){
				cout << 0 << endl;
			}else{
				cout << n - (l + f) << endl;
			}
		}else{
			cout << n - max(l,f) << endl;
		}
	}
	return 0;
}
