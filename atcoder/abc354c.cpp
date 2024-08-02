#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
bool custom_sort(const vector<int> a , const vector<int> b){
	return a[2] < b[2];
}
void solve(){
	int n;
	cin >> n;
	vector<vector<int>> v(n);
	for(int i = 0 ; i < n ; i++){
		int a,c;
		cin >> a >> c;
		v[i].push_back(i+1);
		v[i].push_back(a);
		v[i].push_back(c);
	}
	sort(v.begin(),v.end(),custom_sort);
	vector<int> ans;
	int last = 0;
	for(int i = 0 ; i < n; i++){
		if(v[i][1]  > last){
			last =v[i][1];
			ans.push_back(v[i][0]);
		}
	}
	sort(ans.begin(),ans.end());
	cout << ans.size() << endl;
	for(int e : ans ){
		cout << e << " ";
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
