#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin() , v.end());
	int mid = (n-1)/2;
	int mid_element = v[mid];
	int ans = 1;
	for(int i = mid+1 ; i < n ; i++){
		if(v[i] != mid_element){
			break;
		}
		ans++;
	}
	cout << ans << "\n";
}
// 1 3 3 7 
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
