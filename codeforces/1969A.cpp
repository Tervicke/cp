#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n+1];
		bool ans = false;
		for(int i =1 ; i < n + 1; i++){
			cin >> ar[i];
		}
		if(n == 2){
			cout << 2 << endl;
			continue;
		}
		for(int i = 1 ; i < n + 1; i++){
			int x = ar[i];
			if( ar[x] == i){
				ans = true;
				break;
			}
		}
		if(ans){
				cout << 2 << endl;
		}else{
				cout << 3 << endl;
		}
	}
	return 0;
}
