#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long a,b,x,y;
	cin >> a >> b >> x >> y;
	long long gcd = __gcd(x,y);
	x /= gcd;
	y /= gcd;
	cout << min(a/x , b/y) << endl;

	return 0;
}
