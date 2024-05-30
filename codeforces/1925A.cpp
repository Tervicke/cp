#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		for(int i=0 ; i<n ; i++){
			for(int i = 0 ; i < k ; i++){
				cout << char(97 + i);
			}
		}
		cout << endl;
	}
	return 0;
}
