#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	string s;
	cin >> s;
	string end = s.substr(s.size() - 3 , 3);
	if(end == "san"){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
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
