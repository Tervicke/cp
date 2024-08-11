#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int xc,yc,k;
	cin >> xc >> yc >> k;
	vector<int> x;
	vector<int> y;
	if(k % 2 == 1){
		x.push_back(xc);
		y.push_back(yc);
		k-=1;
	}
	for(int i = 1 ; i <= k/2 ; i++){
		x.push_back(xc);
		x.push_back(xc);
		y.push_back(yc+i*2);
		y.push_back(yc-i*2);
	}
	for(int i = 0 ; i < x.size() ; i++){
		cout << x[i] << ' ' << y[i] << endl;
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


