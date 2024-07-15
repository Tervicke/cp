#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string result = "";
	bool inZeroSequence;
	for(char c : s) {
		if(c == '0'){
				if(!inZeroSequence) {
						result += c;
						inZeroSequence = true;
				}
		}else{
				result += c;
				inZeroSequence = false;
		}
  }
	int cnt =0;
	for(char c : result){
		if(c=='0'){
			cnt++;
		}
	}
	if(result.size() - cnt > cnt){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
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
