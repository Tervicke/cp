#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long total = 0;
	long long a[n];
	long long x;
	long long ans;
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		total+=x;
		a[i]=x;
	}
	long long len = sizeof(a)/sizeof(a[0]);
	long long osum=0;
	sort(a,a+len,greater<int>());
	for(int i=0 ; i < n ; i++){
		if(osum>total){
			break;
		}
		ans++;
		total-=a[i];
		osum+=a[i];
	}
	cout << ans ;
	return 0;
}
