#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	long long k;
	cin >> s >> k;
	long long no_of_zero = 0;
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == '0'){
			no_of_zero++;
		}
	}

	if(no_of_zero < k){
		if(no_of_zero == 0){
			cout << s.size() << endl;
		}else{
			cout << s.size() - 1 << endl;
		}
	}else{
		long long no_of_zero = 0;
		long long ans = 0;
		for(int i = s.size() - 1 ; i > 0 ; i--){
			if(no_of_zero == k){
				break;
			}
			if(s[i] == '0'){
				no_of_zero++;
			}else{
				ans++;
			}

		}
		cout << ans << endl;
	}

	return 0;
}
