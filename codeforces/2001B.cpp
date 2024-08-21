#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	if(n % 2== 0){
		cout << "-1\n";
	}else{
		vector<int> ans;
		for(int i = n ; i > 0 ; i--){
			if(i == n){
				ans.push_back(n);
			}else{
				if(i % 2 == 0){
					ans.push_back(i);
				}else{
					ans.insert(ans.begin(),i);
				}
			}
		}
		for(int i = 0 ; i < n ; i++){
			cout << ans[i] <<' ';
		}
		cout << "\n";
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
