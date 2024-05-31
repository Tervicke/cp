#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		int ans = 0;
		cin >> a >> b;
		int diff = abs(a - b);
		if(diff == 0){
			cout << ans << endl;
			continue;
		}
		ans = diff / 10;
		if(diff % 10 != 0){
			ans++;
		}
		cout << ans << endl;

	}
	return 0;
}
