#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	stack<int> st;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '('){
			st.push(i);
		}else if(s[i] == ')'){
			ans +=  i - st.top();
			st.pop();
		}else{ // _
			if(st.empty()){
				st.push(i);
			}else{
				ans +=  i - st.top();
				st.pop();
			}
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
