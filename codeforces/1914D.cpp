#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> a;
	vector<pair<int,int>> b;
	vector<pair<int,int>> c;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		a.push_back({x,i});
	}
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		b.push_back({x,i});
	}
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		c.push_back({x,i});
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	int ans = 0;
	for(int i = n-3 ; i < n ; i++){
		for(int j = n-3 ; j < n ; j++){
			for(int l = n-3 ; l < n ; l++){
				if(c[l].second != a[i].second && c[l].second != b[j].second && b[j].second != a[i].second){
					ans = max(ans,c[l].first + b[j].first + a[i].first);
				}
			}
		}
	}
	cout << ans << endl;
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
