#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,np,nl;
	cin >> n >> k >> l >> c >> d >>p>>nl >> np;
	int res = min(  min(c*d,(p/np)) , (k*l)/nl );
	cout << res / n ;
	return 0;
}
