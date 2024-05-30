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
			int x;
			cin >> x;
			ar[i] = x;
		}
		int Lj=0;
		int Li=0;
		int m=ar[0];
		for(int i=0;i<n-1;i++){
			if(ar[i] != m){
				Li=i-1;
			}
			if(ar[i] == m && ar[i+1] != m){
					Li=i;
					break;
			}
			Li=i;
		}
		for(int j=n-1;j>=1;j--){
			if(ar[j] == m || ar[j-1] != m){
					Lj=j;
					break;
			}
			Lj=j;
		}
		if(Li == n-1){
			cout << "0" << endl;
	 }
		else{
			Li++;
			Lj--;
			cout << Lj - Li + 1 << endl; 
		}
	}
	return 0;
}
