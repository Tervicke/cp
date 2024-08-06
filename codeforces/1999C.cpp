#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n,s,m;
	cin >> n >> s >> m;
	int mx = 0;
	int last = 0;
	int l , r;
	for(int i = 0 ; i < n ; i++){
		cin >> l >> r;
		mx = max(mx,l - last);
		last = r;
	}
	mx = max(mx,m - last);
	if(mx >= s){
		cout << "Yes\n";
	}else{
		cout << "No\n";
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

