#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int m;
	cin >> m;
	vector<int> ans;
	while(m > 0){
			int pow = 1;
			int i = 0;
			while(pow <= m){
					pow *= 3;
					i++;
			}
			m -= pow/3;
			ans.push_back(i-1);
	}
	cout << ans.size() << "\n";
	for(auto c : ans){
		cout << c << " ";
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
