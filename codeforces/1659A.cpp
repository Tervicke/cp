#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
void solve(){
	int n,r,b;
	cin >> n >> r >> b;
	string ans="";
	int group_size = r / (b + 1);
	int remainder = r % (b + 1);
	for(int i = 0 ; i < b + 1 ; i++){
		if(remainder > 0){
			ans += string(group_size,'R');
			ans+='R';
			remainder--;
		}else{
			ans += string(group_size,'R');
		}
		if(i < b){ans+="B";}
	}
	cout << ans << "\n";
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
