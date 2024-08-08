#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,t;
	cin >> n >> t;
	vector<int> cols(n+1,0);
	vector<int> rows(n+1,0);
	int diagonal1 = 0;
	int diagonal2 = 0;
	bool found = false;
	int ans = -1;
	for(int i = 1 ; i <= t ; i++){
		int q;
		cin >> q;
		if(found){
			continue;
		}
		int row = (q % n == 0) ? q/n : q/n + 1;
		int col = (q % n == 0) ? n : q % n;
		rows[row]++;
		cols[col]++;
		if(row == col){
			diagonal1++;
		}
		if( row + col == n + 1){
			diagonal2++;
		}
		if(rows[row] == n){ found = true ; ans = i; }
		if(cols[col] == n){ found = true ; ans = i; }
		if(diagonal1 == n){ found = true ; ans = i; }
		if(diagonal2 == n){ found = true ; ans = i; }
		//cout <<"q "<< q << " row "<< row << " col " << col << "\n";
	}
	/*
	cout << diagonal2 << " " << diagonal1 << endl; 
	for(auto row : rows){
		cout << row << ' ';
	}
	cout << endl;
	for(auto col : cols){
		cout << col << ' ';
	}
	cout << endl;
	*/
	cout << ans << endl;
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
