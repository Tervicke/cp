#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,x,y,z;
	cin >> n >> x >> y >> z;
	if(z > min(x,y) && z < max(x,y)){
		cout << "Yes\n";
	}else{
		cout << "No\n";
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
