#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	for(int i = 1 ; i <=8 ; i++){
		if((s[1]-'0') != i)
			cout << s[0] << i << " ";
	}
	for(int i = 97 ; i <= 104 ; i++){
		if(s[0] != char(i)){
			cout << char(i) << s[1] << " ";
	}
	}
	cout << endl;
	}
	return 0;
}
