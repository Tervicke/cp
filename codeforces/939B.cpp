#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	long long n,k;
	cin >>n >> k;
	long long ak[k];
	for(int i = 0 ; i  < k ; i++){
		cin >> ak[i];
	}
	long long c;
	long long mn = n % ak[0];
	for(int i = 0 ; i < k ; i++){
		if(n % ak[i] <= mn){
			c = i;
			mn = n % ak[i];
		}
	}
	cout << c+1 << " " << n/ak[c] << endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
