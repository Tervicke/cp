#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n,x;
	cin >> n >> x;
	vector<int> a(n);
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	for(int i = 0 ;i <= n ; i++){
		if(m[i] == 0){
			cout << i << "\n";
			break;
		}else{
			int r = m[i] - 1;
			m[i] = 1;
			m[i+x] += r;
		}
	}
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
