#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	char c = 'A';
	if(n % 2 == 1){
		cout << "NO"<< "\n"; 
		return;
	}
	cout << "YES" << "\n";
	for(int i = 0 ; i < n/2 ; i++){
		cout << (i % 2 ? "AA" : "BB");
	}
	cout << endl;
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
