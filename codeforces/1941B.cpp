#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		for(int i = 1 ; i < n - 1 ; i++){
			if(a[i-1] > 0){
				while(a[i-1] != 0){
					a[i-1]--;
					a[i]-=2;
					a[i+1]-=1;
				}
			}
		}
		bool p = true;
		/*
		for(int i = 0 ; i < n; i++){
			cout << a[i] << " ";
		}
		*/
		for(int i = 0 ; i < n ; i++){
			if(a[i] != 0){
				p = false;
				break;
			}
		}
		if(p){
			cout << "YES";
		}else{
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}
