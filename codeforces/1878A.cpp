#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	bool pos = false;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		if(x == k){
			pos = true;
		}
	}
	if(pos){cout << "Yes\n";}
	else{cout << "No\n";}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
