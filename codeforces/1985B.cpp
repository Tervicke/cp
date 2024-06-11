#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n==1){
			cout << 1 << endl;
			continue;
		}
		if(n == 2){
			cout << 2 << endl;
			continue;
		}
		if(n == 3){
			cout << 3 << endl;
		}else{
			cout << 2 << endl;
		}
	}
	return 0;
}
