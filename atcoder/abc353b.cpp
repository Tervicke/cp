#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	int index = 0;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		int temp = 0;
		while(index < n && temp + v[index] <= k){
			temp += v[index];
			index++;
		}
		i = index;
		ans++;
	}
	if(index == n - 1){ans++;}
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
