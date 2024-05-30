#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,a1=0,a2=0;
		string c,r;
		cin >> x;
		cin >> c >> r;
		for(int i=0;i<x;i++){
			if(c[i]!=r[i]){
				if(c[i]=='1'){
					a1++;
				}
				else{
					a2++;
				}
			}
		}
		cout << max(a1,a2 ) << endl;
	}
	return 0;
}
