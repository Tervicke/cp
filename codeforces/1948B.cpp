#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	int mx = -1;
	vector<int> v(n);
	vector<int> ans;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	ans.push_back(v[n-1]);
	for(int i = n-2; i >= 0 ; i--){
		if(v[i] > ans[ans.size() - 1]){
			string s = to_string(v[i]);
			for(int j = s.size() - 1 ; j >= 0 ; j--){
				ans.push_back(s[j] - '0');
			}
		}else{
			ans.push_back(v[i]);
		}
	}
	for(int i = 0 ; i < ans.size() - 1 ; i++){
		if(ans[i] < ans[i+1]){
			cout << "NO" << endl;
			return;
		}	
	}
	cout << "YES" << endl;
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
