#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
	}
	if(n == 1 || n == 2){
		cout << "Bob\n";
	}else{
		bool pos = false;
		int cnt = 0;
		for(int i = 0 , j = n - 1; i < n , j >= 0; i++ , j--){
			if(a[i] == b[j]){
				cnt++;
			}
		}
		if(cnt == n){pos = true;}
		cnt = 0;
		for(int i  = 0 ; i < n ; i++){
			if(a[i] == b[i]){
				cnt++;
			}
		}
		if(cnt==n){pos = true;}
		if(pos)
			cout << "Bob\n";
		else
			cout << "Alice\n";
	}
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
