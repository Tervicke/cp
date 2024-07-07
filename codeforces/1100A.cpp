#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >>n >> k;
	int a[n];
	for(int i= 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	int mx = 0;
	for(int b = 0 ; b < n ; b++){
		int temp = 0;
		for(int i = 0 ; i < n ; i++){
			if(i % k != b % k){
				temp += a[i];
			}
		}
		mx = max(abs(temp),abs(mx));
	}
	cout << mx << endl;
	return 0;
}
