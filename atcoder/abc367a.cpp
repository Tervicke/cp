#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	bool sleep = false;
	while(true){
		if(b == c){
			break;
		}
		if(b == 24){
			b = -1;
		}
		if(b == a){
			sleep = true;
			break;
		}
		b++;
	}
	if(sleep){
		cout << "No\n";
	}else{
		cout << "Yes\n";
	}
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
