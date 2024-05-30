#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a[11];
		int ans = 0;
		for(int i = 0 ; i < 10 ; i++){
			string s;
			cin >> s;
			for(int j = 0 ; j < 10 ; j++){
				if(s[j]=='X'){
					if(j>5){
						a[10-j]++;
					}
					else{
						a[j+1]++;
					}
				}
			}
		}
		cout << a[0] << endl;
		for(int i = 0 ; i <= 10 ; i++){
			ans += a[i]*(i+1);
		}
		cout << ans << endl;
	}
	return 0;
}
