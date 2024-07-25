#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	long long x,y,a,b;
	cin >> x >> y;
	cin >> a >> b;
	long long pans1 =  ( ( max(x,y) - min(x,y) ) * a) + ( b * min(x,y) );
	long long pans2 = (a * x) + (a * y) ;
	cout << min(pans1,pans2) << endl;
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
