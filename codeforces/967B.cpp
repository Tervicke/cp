#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin >> n >> a >> b;
	int sum = 0;
	int ar[n];
	for(int i = 0 ; i < n ; i++){
		cin >> ar[i];
		sum += ar[i];
	}
	sort(ar+1 , ar+n , greater<int>());
	int ans = 0;
	for(int i = 1 ; i < n ; i++){
		float B = ar[0]*a/sum;
		sum -= ar[i];
		if(B>=b){
			ans = i;
			break;
		}
	}
	if(ans == 0){
		cout << n - 1 << endl;
	}else{
		cout << ans - 1 << endl;
	}
}
