#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(n % 2 == 0){
		cout << "2\n";
		cout << "1 " << n << "\n";
		cout << "1 " << n << "\n";
	}else{
		cout << "4\n";
		cout << "2 " << n << "\n";
		cout << "2 " << n << "\n";
		cout << "1 2\n";
		cout << "1 2\n";
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
