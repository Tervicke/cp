#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
bool is_palindrome(string s){
	for(int i = 0,j = s.size() - 1;i<s.size() / 2 ; i++ , j--){
		if(s[i] != s[j]){
			return false;
		}
	}
	return true;
}
void solve(){
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	int ans = 0;
	do{
		bool flag = false;
		for(int i = 0 ; i < s.size() - k+1 ; i++){
			string sub = s.substr(i,k);
			if(is_palindrome(sub)){
				flag = true;
				break;
			}
		}
		if(!flag){
			ans++;
		}
	}while( next_permutation(s.begin(),s.end()) );
	cout << ans << endl;
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
