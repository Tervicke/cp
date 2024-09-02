#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int a,b;
	cin >> a >> b;
	int res = a + 2*b;
	bool pos = true;
	if(res % 2 == 1){
		pos = false;
	}
	if(b % 2 == 1 && a % 2 != 0){
		pos = false;
	}
	if(a == 0 && b % 2 != 0){
		pos = false;
	}
	if(b == 0 && a % 2 != 0){
		pos = false;
	}
	if(pos){cout << "YES\n";}
	else{cout << "NO\n";}
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
