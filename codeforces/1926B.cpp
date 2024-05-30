#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[10] = {0};
		bool isTriangle = false;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				char x;
				cin >> x;
				if(x == '1'){
					ar[i]++;
				}
			}
		}
		for(int i = 0 ; i < n - 1; i++){
			if(ar[i] != ar[i+1] && ar[i+1] != 0 && ar[i] != 0){
				isTriangle=true;
				break;
			}
		}
		if(isTriangle){
			cout << "TRIANGLE" << endl;
		}else{
			cout << "SQUARE" << endl;
		}
	}
	return 0;
}
