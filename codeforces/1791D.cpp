#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	map<char,int> a;
	map<char,int> b;
	string s;
	cin >> s;
	a[s[0]]++;
	for(int i = 1 ;i < n; i++){
		b[s[i]]++;
	}
	size_t ans = (b.size() + a.size());
	for(int i = 1 ; i < n - 1 ; i++){
		b[s[i]]--;
		if(b[s[i]] == 0){b.erase(s[i]);}
		a[s[i]]++;
		ans = max(ans , b.size() + a.size());
	}
	cout << ans << endl;
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
