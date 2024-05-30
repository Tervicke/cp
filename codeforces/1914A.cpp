#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,ans=0;
		cin >> n;
		string s;
		int ar[27]={0};
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			ar[int(x) - 64]++;
		}
		for(int i = 1 ; i <= 26 ; i++){
			if(ar[i] >= i){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
