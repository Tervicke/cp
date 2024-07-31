#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int ans = 0;
	for(int i = 0 ; i < n - 2 ; i++){
		if(s1[i] == 'x' && s1[i+1] == '.' && s1[i+2] == 'x' && s2[i] == '.' && s2[i+1] == '.' && s2[i+2] == '.'){
			ans++;
		}
		if(s2[i] == 'x' && s2[i+1] == '.' && s2[i+2] == 'x' && s1[i] == '.' && s1[i+1] == '.' && s1[i+2] == '.'){
			ans++;
		}
	}
	cout << ans << '\n';
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

