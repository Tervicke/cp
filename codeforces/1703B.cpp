#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,res=0;
		int ar[26] = {0};
		cin >> n;
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			if(ar[int(x) - 65] == 0){
				ar[int(x) - 65]++;
				res+=2;
			}else{
				res+=1;
			}
		}
		cout << res << endl;
	}
	return 0;
}
