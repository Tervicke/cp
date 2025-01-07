#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(s[0] == 's'){s[0] = '.';}
	if(s[n-1] == 'p'){s[n-1] = '.';}
	bool iss = false;
	bool isp = false; 
	for(int i = 0 ; i < n ; i++){
		if(s[i] == 'p'){isp = true;}
		if(s[i] == 's'){iss = true;}
	}
	cout << (iss && isp ? "NO" : "YES") << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
