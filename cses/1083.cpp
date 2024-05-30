#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0,r=0,x;
	cin >> n;
	for(int i=1;i <= n-1;i++){
		cin >> x;
		s+=x;
		r+=i;
	}
	cout << n - (s - r);
	return 0;
}
