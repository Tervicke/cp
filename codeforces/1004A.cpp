#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int d;
	cin >> n >> d;
	int ans = 2;
	int last = 0;
	for(int i = 0 ; i < n ; i++){
		int cur;
		cin >> cur;
		if(i!=0){
			if(cur - last > 2*d){
				ans += 2;
			}
			if(cur - last == 2*d){
				ans += 1;
			}
		}
		last = cur;
	}
	cout << ans << endl;
	return 0;
}
