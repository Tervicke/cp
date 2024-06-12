#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n-1];
		int s = 1000;
		for(int i = 0 ; i < n - 1; i++){
			cin >> ar[i];
		}
		cout << s << " ";
		for(int i = 0 ; i < n - 1 ; i++){
			s+=ar[i];
			cout << s << " ";
		}
		cout << endl;
	}
	return 0;
}
