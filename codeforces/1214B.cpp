#include <bits/stdc++.h>
using namespace std;
int main(){
	int b,g,n;
	cin >> b;
	cin >> g;
	cin >> n;
	int ans = 0;
	for(int i = 0 ; i < n + 1 ; i++){
		if(n - i <= b && i <= g){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
