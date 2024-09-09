#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 1e10 + 7;
void solve(){
	int n;
	cin >> n;
	int sum = 0;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		v[i] = x;
		sum += x;
	}
	bool pos = false;
	for(int i = 0 ; i < n ; i++)	{
		int temp_sum = sum - v[i];
		if(v[i] % 2 == temp_sum % 2){
			pos = true;
			break;
		}
	}
	if(pos){cout << "YES\n";}
	else{cout <<"NO\n";}
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
