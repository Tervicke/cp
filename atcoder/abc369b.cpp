#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n;
	cin >> n;
	int r = -1;
	int l = -1;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		char c;
		int x;
		cin >> x >> c;
		if(c == 'R'){
			if(r != -1){ans+=abs(r-x);}
			r = x;
		}
		if(c == 'L'){
			if(l != -1){ans+=abs(l-x);}
			l = x;
		}
	}
	cout << ans << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
