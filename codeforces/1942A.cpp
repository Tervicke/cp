#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	if(n == k){
		while(n--){
			cout << 1 << " ";
		}
		cout << endl;
		return;
	}
	if(k == 1){
		cout << 2 << ' ';
		for(int i = 1 ; i < n ; i++){
			cout << 1 << " ";
		}
		cout << endl;
	}else{
		cout << - 1 << endl;
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
