#include <bits/stdc++.h>
using namespace std;
int main(){
	int l,r,a;
	cin >> l >> r >> a;
	int diff = max(l,r) - min(l,r);
	if(diff > a){
		cout << (min(l,r) + a )* 2 << endl;
	}else if(diff == a){
		cout << max(l,r)*2 << endl;
	}else{
		a -= diff;
		cout << (a/2 + max(l,r) )* 2   << endl;
	}
	return 0;
}
