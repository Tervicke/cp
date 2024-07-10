#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	if(m==0){
		cout << 1 << endl;
		return 0;
	}
	if(m==n){
		cout << 0 << endl;
		return 0;
	}
	cout << min(m,n-m);
	return 0;
}
