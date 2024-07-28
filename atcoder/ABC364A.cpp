#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	string last = " ";
	bool pos = true;
	while(n--){
		string cur;
		cin >> cur;
		if(last == cur && cur == "sweet" && n != 0){
			pos = false;
		}
		last = cur;
	}
	if(pos){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
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
