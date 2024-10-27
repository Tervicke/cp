#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
		set<int> x;
		set<int> y;
	for(int i = 0 ; i < 8 ; i++){
		string s;
		cin >> s;
		for(int j = 0 ; j < 8 ; j++){
			if(s[j] == '#'){
				x.insert(j);
				y.insert(i);
			}
		}
		}
		int ans = 0;
		for(int i = 0 ; i < 8 ; i++){
			for(int j = 0 ; j < 8 ; j++){
				if(x.find(i) == x.end() && y.find(j) == y.end() ){
					ans++;
				}
			}
		}
		cout << ans << "\n";

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
