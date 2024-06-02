#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>n >> m;
		if(n<m){
			cout << "NO" << endl;
			continue;
		}
		else{
			if((m - n) % 2 == 0){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
