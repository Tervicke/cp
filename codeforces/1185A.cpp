#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	int d;
	int ans = 0;
	for(int i = 0 ; i < 3 ; i++){
		cin >> a[i];
	}
	cin >> d;
	sort(a,a+3);
	if(a[1] - a[0] < d){
		ans += d - (a[1] - a[0]);
	}
	if(a[2] - a[1] < d){
		ans += d - (a[2] - a[1]);
	}
	cout << ans << endl;
	return 0;
}
