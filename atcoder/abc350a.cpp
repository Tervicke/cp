#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	string s;
	cin >> s; //ABC???
	int no = ((s[3]-'0')*100) + ((s[4]-'0')*10) + (s[5] - '0');
	if(no >= 350 || no == 316 || no == 0){
		cout << "No\n";
	}else{
		cout << "Yes\n";
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

