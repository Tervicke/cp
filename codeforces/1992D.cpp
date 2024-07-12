#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	string s;
	cin >> s;
	s = 'L' + s + 'L';
	int current = 0 , swim = 0;
	while(current<=n){
		if(s[current] == 'C'){
			cout << "NO" << endl;
			return;
		}
		if(s[current] == 'W'){
			swim++;
			current++;
			continue;
		}
		if(s[current] == 'L'){
			bool jumped = false;
			for(int i = min(current+m,n+1) ; i > current; i--){
				if(s[i] == 'L'){
					current = i;
					jumped = true;
					break;
				}
			}
			if(jumped)
				continue;

			for(int i = min(current+m,n+1); i > current ; i--){
				if(s[i] == 'W'){
					current = i;
					jumped= true;
					break;
				}
			}
			if(!jumped){
				cout << "NO" << endl;
				return;
			}
		}
	}				
	if(swim > k){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
