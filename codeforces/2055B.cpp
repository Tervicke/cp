#include <bits/stdc++.h>
#include <bit>
#include<math.h>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void suball(vector<int>& d , int x , int index){
	for(int i = 0 ;i < d.size() ; i++){
		if(i!=index){
			d[i] += x; 
		}else{
			d[i] -=x;
		}
	}
}
void solve() {
	int n;
	cin >> n;
	vector<int> a(n),b(n);
	for(int i = 0 ;i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ;i < n ; i++){
		cin >> b[i];
	}
	vector<int> d(n);
	for(int i = 0 ; i < n ; i++){
		d[i] = b[i] - a[i];
	}
	for(int i = 0 ; i < n ; i++){
		if(d[i] > 0){
			suball(d , d[i] , i);
		}
	}
	for(int i = 0 ; i < n ; i++){
		if(d[i] > 0){
			cout << "NO\n";
			return;
		}
	}
	cout << "Yes\n";
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
