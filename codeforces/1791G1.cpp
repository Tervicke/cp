#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,c;
	cin >> n >> c; 
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	vector<int> ans;
	for(int i = 0; i < n; i++){
		ans.push_back(v[i] + i + 1);
	}
	sort(ans.begin(),ans.end());
	long long sum = 0;
	int index = -1;
	while(sum <= c){
		index++;
		sum += ans[index];
		if(index == n){
			break;
		}
	}
	cout << index << endl;
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
