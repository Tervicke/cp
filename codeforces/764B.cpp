#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	for(int i = 1 ; i <= n ; i++){
		if(i % 2 == 0){
			if(n%2==0 && i > n/2){
				cout << a[n-i+1] << " ";
			}else{
				cout << a[i] << " ";
			}
		}else{
			if(n%2==0 && i > n/2){
				cout << a[i] << " ";
			}else{
				cout << a[n-i+1] << " ";
			}
		}

	}
	cout << endl;
	return 0;
}
