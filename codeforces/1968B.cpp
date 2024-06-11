#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		char ar[a];
		int p = 0;
		int ans =0;
		bool full = false;
		for(int i = 0 ; i < a ; i++){
			cin >> ar[i];
		}
		for(int i =0;i<b;i++){
			char x;
			cin >> x;
			if(ar[p] == x & !full){
				p++;
				ans++;
				if(p == a){
					full = true;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
