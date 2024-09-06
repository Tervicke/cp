#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> b(n);
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
	}
	vector<int> a;
	a.push_back(b[0]);
	for(int i = 1 ; i < n ; i++){
		if(b[i] >= b[i-1]){
			a.push_back(b[i]);
		}else{
			if(b[i] - 1 == 0){
				a.push_back(b[i]);
				a.push_back(b[i]);
			}else{
				a.push_back(b[i] - 1);
				a.push_back(b[i]);
			}
		}
	}
	cout << a.size() << "\n";
	for(auto e : a){
		cout << e << ' ';
	}
	cout << "\n";
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
