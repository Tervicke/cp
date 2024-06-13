#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,f,k;
		cin >> n >> f >> k;
		int ar[n];
		for(int i = 0 ; i < n ; i++){
			cin >> ar[i];
		}
		if(n==1){
			cout << "YES" << endl;
			continue;
		}
		int fc = ar[f-1];
		sort(ar,ar+n,greater<int>());
		if(ar[k-1] == fc){
			if(k<n && ar[k] == fc){
				cout << "MAYBE" << endl;
			}else{
				cout << "YES" << endl;
			}
		}else if(ar[k-1] > fc){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
	return 0;
}
