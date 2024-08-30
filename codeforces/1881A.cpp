#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
bool checksub(string s, string x) {
    int m = s.size();
    int n = x.size();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (x[i + j] != s[j]) {
                break; 
            }
        }
        if (j == m) {
            return true;
        }
    }
    return false;
}

void solve(){
	int n,m;
	cin >> n >> m;
	string s,x;
	cin >> x;
	cin >> s;
	bool found = false;
	int i = 0;
	for(i = 0 ; i <= 5 ; i++){
		if(checksub(s,x)){
			found = true;
			break;
		}
		x+=x;
	}
	if(found){cout << i << "\n";}
	else{cout << "-1\n";}
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
