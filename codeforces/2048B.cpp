#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve() {
	int n,k;
	cin >> n >> k;
	int f = 1;
	int l = n;
	for(int i = 1 ; i <= n ; i++){
		if(i % k == 0){
			cout << f << " ";
			f++;
		}else{
			cout << l << " ";
			l--;
		}
	}
	cout << "\n";
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
