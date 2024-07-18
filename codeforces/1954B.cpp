#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	int f = 1;
	int b = 1;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	for(int i = 1 ; i < n ; i++){
		if(v[i] == v[i-1]){
			f++;
		}else{
			break;
		}
	}
	for(int i = n - 2 ; i >= 0 ; i--){
		if(v[i] == v[i+1]){
			b++;
		}else{
			break;
		}
	}
	int ans = min(f,b);
	int last = -1;
	for(int i = 0 ; i < n ; i++){
		if(v[i] != v[0]){
			if(last != -1){
				ans = min(ans,i - last - 1);
			}
			last = i;
		}
	}
	if(ans == n){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
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
