#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void print_array(vector<int>& b){
	for(auto e : b){cout << e << " ";}
	cout << "\n";
}
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	vector<int> b; 
	b.push_back(a[0]);
	unordered_set<int> s;
	int index = 1;
	s.insert(a[0]);
	for(int i = 1 ;i < n ;i++){
		if(s.find(a[i]) == s.end()){
			b.push_back(a[i]);
			s.insert(a[i]);
		}else{
			while(s.find(index) != s.end()){index++;}
			assert(index <= n);
			b.push_back(index);
			s.insert(index);
		}
	}
	print_array(b);
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
