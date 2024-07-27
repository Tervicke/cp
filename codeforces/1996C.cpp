#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,q;
	cin >> n >> q;
	vector<vector<int>> pa(n+1,vector<int>(26,0));
	vector<vector<int>> pb(n+1,vector<int>(26,0));

	for(int i = 1 ; i <= n ; i++){
		char c;
		cin >> c;
		pa[i][c-'a']++;
		for(int j = 0; j < 26 ; j++){
			pa[i][j] += pa[i-1][j];
		}
	}

	for(int i = 1 ; i <= n ; i++){
		char c;
		cin >> c;
		pb[i][c-'a']++;
		for(int j = 0; j < 26 ; j++){
			pb[i][j] += pb[i-1][j];
		}
	}

	while(q--){
		int l,r;
		cin >> l >> r;
		l--;
		int diff = 0;
		for(int i = 0 ; i < 26 ; i++){
			int cnta = pa[r][i] - pa[l][i];
			int cntb = pb[r][i] - pb[l][i];
			diff += abs(cnta - cntb);
		}
		cout << diff/2 << endl;
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
