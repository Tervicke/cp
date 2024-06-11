#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			if(x == 'U')
				ans++;
		}
		if(ans % 2 != 0){
			cout << "YES" << endl;
		}else
			cout << "NO" << endl;
	}
	return 0;
}
