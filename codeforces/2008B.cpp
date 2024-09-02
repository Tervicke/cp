#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
bool isPerfectSquare(int n) {
    if (n < 0) return false; 

    int root = static_cast<int>(sqrt(n));  
    return root * root == n;  
}
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(!isPerfectSquare(n)){
		cout << "NO\n";
	}else{
		bool pos = true;
		int cnt = sqrt(n);
		for(int i = 0 ;i < n ; i+=cnt){
			string x = s.substr(i,cnt);
			int cone = 0;
			for(int j = 0 ; j < cnt; j++){
				if(x[j] == '1'){cone++;}
			}
			if(i == 0 || i == n-cnt){
				if(cone != cnt){
					pos = false;
					break;
				}
			}else{
				if(cone != 2){
					pos = false;
					break;
				}
			}
			if(!pos){
				break;
			}
		}
		if(pos){cout << "YES\n";}
		else{cout << "NO\n";}
	}
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
