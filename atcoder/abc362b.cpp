#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	vector<int> v(3);
	v[0] = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	v[1] = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
	v[2] = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
	sort(v.begin(),v.end());
	if(v[0] + v[1] == v[2]) { cout << "Yes" <<endl ;}
	else{cout << "No" << endl;}
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
