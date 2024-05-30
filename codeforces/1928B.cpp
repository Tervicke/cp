#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int ans=0;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int ar[x];
		for(int i=0;i<x;i++){
			cin >> ar[i];
		}
		sort(ar,ar+x);
		for(int i=0;i<x;i++){
			ar[i]	 = ar[i] + x - i;
		}
		int max = ar[x-1];
		for(int i=0;i<x;i++){
			cout << ar[i] << " " << endl;
			if((ar[i])==max){
				ans++;
			}
		}
			cout  << endl << ans << endl;
	}
	return 0;
}
