#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int l,r;
		cin >> l >> r;
		cout << floor(log2(r))<< endl;
	}
	return 0;
}
