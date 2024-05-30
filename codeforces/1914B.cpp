#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> ar(n);
		int j=0;
		for(int i = n ; i > 0 ; i--){
			ar[j] = i;
			j++;
		}
		if(k!=0){
			reverse(ar.begin() + (n - k-1)  , ar.end());
		}
		if(k == n - 1){
			sort(ar.begin () , ar.end() );
		}
		for(int i=0;i < n ; i++){
			cout << ar[i] << " ";
		}
		cout << endl ;
	}
	return 0;
}
