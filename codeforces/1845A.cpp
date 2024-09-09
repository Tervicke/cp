#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	int n,k,x;
	cin >> n >> k >> x;
	vector<int> valid;
	for(int i = 1 ; i<=k ; i++){
		if(i != x){valid.push_back(i);};
	}
	int sum = 0;
	bool pos = false;
	vector<int> ans;
	if(valid.size() == 0){
		cout << "NO\n";
	}else{
		while(true){
			sum += valid[0];
			ans.push_back(valid[0]);
			if(sum == n){
				pos = true;
				break;
			}
			if(sum == n+1){
				if(valid.size() >= 2){
					pos = true;
					ans.pop_back();
					ans[ans.size() - 1] = 3;
				}
				else{
					pos = false;
				}
				break;
			}
		}
		if(pos){
			cout << "YES\n";
			cout << ans.size() << "\n";
			for(auto e : ans){
				cout << e << " ";
			}
			cout << "\n";
		}else{
			cout << "NO\n";
		}
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
