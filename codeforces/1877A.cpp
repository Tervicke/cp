#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	int total = 0;
	for(int i = 0 ; i < n-1 ; i++){
		int x;
		cin >> x;
		total +=x; 
	}
	cout << -1*total << "\n"; 
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
