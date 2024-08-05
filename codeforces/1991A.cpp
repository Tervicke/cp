#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 1 ; i <= n ; i++){
		int x;
		cin >> x;
		if(i % 2 == 1){
			v.push_back(x);
		}
	}
	sort(v.begin(),v.end(),greater<int>());
	cout << v[0] << endl;
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
