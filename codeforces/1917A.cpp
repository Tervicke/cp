#include <bits/stdc++.h>
#include <ostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m=0;
		int isZero=false;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;	
			if(x==0){
				isZero=true;
			}
			if(x < 0){
				m++;
			}
		}
		if(m%2!=0 || isZero){
			cout << "0" << endl;
		}
		else{
			cout << 1 << endl;
			cout << 1 << " " << 0 << endl;
		}
	}
	return 0;
}
