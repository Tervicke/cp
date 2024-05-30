#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , c , ans =0,max=0;
		cin >> n  >> c;
		int ar[100] = {0};
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			if(max<x)
				max = x;
			ar[x-1]++;
		}
		for(int i = 0 ; i < max ; i++){
			if(ar[i] >= c){
				ans +=c;
			}else{
				ans += ar[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
