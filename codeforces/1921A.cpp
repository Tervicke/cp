#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,xt,yt;
		int ans;
		cin >> x >> y;
		for(int i = 0 ; i < 3 ; i++ ){
			cin  >> xt >> yt;
			if(xt==x){
				ans = (yt- y)*(yt-y);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
