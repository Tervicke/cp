#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(k == 1){
		bool ispos = true;
		for(int i = 1 ; i < n ; i++){
			if(v[i-1] > v[i]){
				ispos = false;
				break;
			}
		}
		if(ispos){
			cout << "YES\n";
		}else{
			cout << "NO\n"; 
		}
	}else{
		cout << "YES\n";
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
