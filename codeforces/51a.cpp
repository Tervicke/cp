#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string hello = "hello";
	int k=0;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i]==hello[k]){
			k++;
		}
	}
	if(k >=hello.length()){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}

