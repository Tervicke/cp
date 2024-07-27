#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	vector<string> v(n+1);
	vector<string> ans; 
	for(int i = 1 ;i <= n ; i++){
		cin >> v[i];
	}
	for(int i=1 ; i <= n ; i++){
		string temp = "";
		for(int j = 1 ; j <= n ; j++){
			if(j % k == 0){
				temp += v[i][j-1];
			}
		}
		if(i % k == 0){
			ans.push_back(temp);
		}
	}

	for(int i = 0 ; i < ans.size() ; i++){
		cout << ans[i] << endl;
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
