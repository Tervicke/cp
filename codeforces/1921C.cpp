#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,f,a,b;
		cin >> n >> f >> a >> b;
		long long ar[n];
		long long ans = 0; //required battery
		bool pos = true;
		for(int i = 0 ; i < n ; i++){
			cin >> ar[i];
		}
		ans += min(ar[0] * a, b);
		for(int i = 1 ; i < n ; i++){
			ans += min( (ar[i] - ar[i-1])*a, b);
			if(ans >= f){
				pos = false; 
				break;
			}
		}
		//edge
		if(n == 1){
			if( f <= min(ar[0] * a , b ))  
				pos = false;
			else
				pos = true;
		}

		if(pos){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
