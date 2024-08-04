#include <bits/stdc++.h>
#include <bitset>
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
	for(int i = 0 ; i < n ; i++){			
		int result = 0;
		for(int j = 0 ; j < n ; j++){
			if(j != i){
				result ^= v[j];
			}
		}
		if(v[i] == result){
			cout << v[i] << "\n";
			break;
		}
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

