#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	string t;
	int n;
	cin >> n;
	cin >> t;
	t = "x" + t;
	if(n % 2 == 0){
		cout << "No\n";
		return;
	}
	if(t[(n + 1) / 2] != '/'){
		cout << "No\n";
		return;
	}
	for(int i = 1 ; i <= ((n + 1) / 2) - 1 ; i++){
		if(t[i] != '1'){
			cout << "No\n";
			return;
		}
	}
	cout << "\n";
	for(int i = ((n + 1) / 2) + 1 ; i <= n ; i++){
		if(t[i] != '2'){
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
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
