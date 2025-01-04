#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n,k;
	cin >> n >> k;
	if(n == 1){
		int x;
		cin >> x; 
		cout << "1\n"; 
		return;
	}
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		m[x]++;
	}
	int ans = m.size();
	vector<pair<int,int>> v(m.begin(),m.end());
	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // Compare values
  });
	for(auto p : v){
		if(k > p.second){
			ans--;
			k-=p.second;
		}
		else if(k == p.second){
			ans--;
			break;
		}
	}
	cout << max(1,ans) << "\n";
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

