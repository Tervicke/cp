#include <bits/stdc++.h>
using namespace std;
int main(){
	string l1,l2,s;
	cin >> l1;
	cin >> l2;
	cin >> s;
	string ans = "";
	for(char e : s){
		if(isdigit(e)){
			ans += e;
			continue;
		}
		int pos  = l1.find(tolower(e));
		if(isupper(e)){
			ans += toupper(l2[pos]);
		}else{
			ans += l2[pos];
		}
	}
	cout << ans << endl;
	return 0;
}
