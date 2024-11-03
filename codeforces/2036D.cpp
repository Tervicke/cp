#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
#include <iostream>
#include <vector>
#include <string>

void solve() {
	int n, m;
	cin >> n >> m;
	vector<std::vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++) {     
			for (int j = 0; j < m; j++) {   
					std::cin >> v[i][j];
			}
	}
	int ans = 0;
	for (int i = 0; i + i < n && i + i < m; i++) {
			string s;
			for (int j = i; j < m - i; j++) {
					s += v[i][j];
			}
			for (int j = i + 1; j < n - i; j++) {
					s += v[j][m - 1 - i];
			}
			for (int j = m - i - 2; j >= i; j--) {
					s += v[n - 1 - i][j];
			}
			for (int j = n - i - 2; j > i; j--) {
					s += v[j][i];
			}
			std::string doub = s + s;
			size_t pos = doub.find("1543");
			while (pos != string::npos && pos < s.size()) {
					ans += 1;
					pos = doub.find("1543", pos + 1);
			}
	}
	cout << ans << "\n";
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
