#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	if(c % 2 == 1){
		a++;
	}
	if(a > b){
		cout << "First\n";
	}else{
		cout << "Second\n";
	}
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
