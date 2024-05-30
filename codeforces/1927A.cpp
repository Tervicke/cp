#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ans[n];
	for(int i = 0 ; i < n ;i++){
		int x;
		cin >> x;
		int first_pos = -1;
		int last_pos = -1;
		int first_located=0;
		for(int j=0;j < x;j++){
			char s;
			cin >> s;
			if(s=='B' ){
				if(!first_located){
					first_pos = j;
					first_located=1;
				}
				last_pos=j;
			}
		}
		ans[i]=(last_pos - first_pos) + 1;
	}
	for(int i =0 ;i < n ;i++){
			cout << ans[i]<< endl;
	}
	return 0;
}
