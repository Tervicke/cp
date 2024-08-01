#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<bitset<15>> test(m);
	string res = "";
	for(int i = 0 ; i < m ; i++){
		int c;
		cin >> c;
		for(int j = 0 ; j < c ; j++){
			int x;
			cin >> x;
			test[i].set(x-1);
		}
		char cx;
		cin >> cx;
		res.push_back(cx);
	}
	int ans = 0;
	for(int mask= 0 ; mask < (1 << n) ; mask++){
		bitset<15> maskbs(mask);
		bool valid = true;
		for(int i = 0 ; i < m ; i++){
			int realcount = 0;
			for(int j = 0 ; j < n ; j++){
				if(test[i][j] && maskbs[j]){
					realcount++;
				}
			}
			if(res[i] == 'o'){
				if(realcount < k){
					valid = false;
				}
			}else{
				if(realcount >= k){
					valid = false;
				}
			}
		}
		if(valid){
			ans++;
		}
	}
	cout << ans << endl;
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
