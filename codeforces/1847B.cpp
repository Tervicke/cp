#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		for(int i = 0; i < n ; i++){
			cin >> ar[i];
		}
		int p = ar[0];
		int cnt = 1;
		for(int i = 0 ; i < n ; i++){
			p &= ar[i];
			if(p == 0){
				if(i == n - 1){
					break;
				}
				cnt++;
				p = ar[i+1];
			}
		}
		if(p != 0){
			cnt--;
		}
		cnt = max(cnt,1);
		cout << cnt << endl;
	}
	return 0;
}
