#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		long long product = 1;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			product *= x;	
		}
		if(2023%product == 0){
			cout  << "YES" << endl;
			cout << 2023/product << " ";
			for(int i = 0 ; i < k - 1 ; i++){
				cout << 1 << " "	;
			}
		}
		else{
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}
