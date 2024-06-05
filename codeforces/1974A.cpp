#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,s;
		cin >> x >>y;
		int ans = ceil((double)y/2);
		if(y%2==0){
			s = ans * 7;
		}else{
			s = ((ans - 1) * 7) + 11;
		}
		
		//edge case
		if(y == 0){
			cout << ceil((double)x/15) << endl;
			continue;
		}
		if(x > s){
			ans += ceil((double)(x-s)/15);
		}
		cout << ans << endl;
	}	
	return 0;
}
