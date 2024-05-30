#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long int y,x;
		long long int ans;
		cin >> y >> x;
		if(y<x){
			 if(x%2==0){
				 ans = x*x - (y+1);
			 }else{
				 ans = x*x - (y-1);
			 }
			cout << ans   << endl;
		}
		else if(x==y){
			ans =  y*y - (x - 1);
			cout << ans << endl;
		}
		else{
			if(y%2 == 0){
				ans = y*y - ( x - 1 );
			}else{
				ans = (y-1)*(y-1) + ( x);
			}
			cout << ans   << endl;
		}
	}
	return 0;
}
