#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char,int> m;
	for(int i = 0 ; i < n; i++){
		m[s[i]]++;
	}
	vector<pair<char,int>> v(m.begin(),m.end());
	sort(v.begin(),v.end(),[](auto a , auto b) {
			return a.second > b.second;
	});
	char to_change = v[v.size() - 1].first;
	char change_to = v[0].first;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == to_change){
			s[i] = change_to;
			break;
		}
	}
	cout << s << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
