#include <bits/stdc++.h>
using namespace std;
int main(){
	string h;
	string ans;
	cin >> h;
	for (int i = 0 ; i < h.length() ; i++){
			h[i] = tolower(h[i]);
			if(h[i] == 'a'|| h[i]  == 'e' || h[i]  == 'i'|| h[i]  == 'u' ||  h[i] == 'o' || h[i] == 'y'){
			}else{
				ans += h[i];
			}
	}
	cout << '.';
		for(int i = 0 ;i < ans.length();i++){
			if(i == (ans.length() - 1)){
				cout << ans[i];
			}else{
				cout << ans[i] << '.';
			}
	}
	return 0;
}
