#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	int n;
	cin >> n;
	if(n < 5){
		cout << -1 << "\n";
		return;
	}
	vector<int> odd; 
	vector<int> even;
	for(int i = 1 ; i <= n ; i++){
		if(i % 2 == 0 && i != 4){
			even.push_back(i);
		}else if(i % 2 == 1 && i != 5){
			odd.push_back(i);
		}
	}
	for(auto c : odd){
		cout << c << ' ';
	}
	cout << "5 4 ";
	for(auto c : even){
		cout << c << ' ';
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
