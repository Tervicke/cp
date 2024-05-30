#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long long ans = 1;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		ans =2*ans;
		ans = ans % (int)(1e9 + 7);
	}
	cout << ans << endl;
}
