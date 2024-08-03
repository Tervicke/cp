#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	int p= 1;
	int mx = INT_MIN;
	vector<int> v(n);
	int zero = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		if( v[i]!=0 ){
			p*=v[i];
		}else{
			zero++;
		}
	}
	if(zero >= 2){
		cout << 0 << endl;
		return;
	}else if(zero == 0){
		for(int i = 0 ; i < n ; i++){
			mx = max(mx,(p/v[i])*(v[i]+1 ));
		}
		cout << mx << endl;
		return;
	}else{
		cout << p << endl;
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

