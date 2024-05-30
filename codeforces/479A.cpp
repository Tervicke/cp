#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int ans = max(a*b*c , a+b+c);
	ans = max(ans , a*(b+c));
	ans = max(ans , (a+b)*c);
	return 0;
}
