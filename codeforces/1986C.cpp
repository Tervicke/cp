#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	int	ind[m];
	set<int> se;
	for(int i = 0 ; i < m ; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	string c;
	cin >> c;
	sort(c.begin(),c.end());
	string ans = "";
	int index = 0;
	for(auto it = se.begin(); it != se.end() ; ++it){
		s[*it - 1] = c[index];
		index++;
	}
	cout << s << endl;
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
