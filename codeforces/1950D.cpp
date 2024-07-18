#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
int MX = pow(10,5);
vector<int> nums;


bool ok(int n){
	if(n == 1) return true;
	bool ans = false;
	for(int i : nums){
		if(i != 0 && i != 1){
			if(n % i == 0){
				ans |= ok(n/i);
			}
		}
	}
	return ans;
}

void solve(){
	int n;
	cin >> n;
	if(ok(n)){
		cout << "yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	for(int i = 0 ; i < MX ; i++){
		string s = to_string(i);
		bool flag = true;
		for(int j = 0 ; j < s.size() ; j++){
			if(s[j] != '1' && s[j] != '0'){
				flag = false;
				break;
			}
		}
		if(flag){
			nums.push_back(i);
		}
	}
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
