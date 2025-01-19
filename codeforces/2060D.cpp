#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//all the best
const long long mod = 10e9 + 7;
int checkfib(vector<int>& v){
	int ans = 0;
	for(int i = 0 ; i < 5 - 2; i++){
		if(v[i+2] == v[i] + v[i+1]){
			ans++;
		}
	}
	return ans;
}
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	for(int i = 0 ; i < n - 1 ; i++){
		if(v[i] == v[i+1]){
			v[i] = 0;
			v[i+1] = 0;
			continue;
		}
		else if(v[i] < v[i +1]){
			v[i+1] = v[i+1] - v[i];
			v[i] = 0;
		}
		else{
			cout << "No\n";
			return;
		}
	}
	cout << "YES\n";
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

