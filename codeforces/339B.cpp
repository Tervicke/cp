#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n , m,x;
	cin >> n >> m;
	long long h=1;
	long long ans=0;
	for(int i=0;i<m;i++){
		cin >> x;
		if(h<x)	{
			ans+=x-h;
		}
		if(h>x){
				ans += (n-h)	+ x;
		}
		h=x;
	}
	cout << ans ;
	return 0;
}
