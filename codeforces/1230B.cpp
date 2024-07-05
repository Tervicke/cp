#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	if(k==0){
		cout << s << endl;
		return 0;
	}
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	int done = 0;
	if(s[0] != '1'){
		s[0] = '1';
		done++;
	}
	for(int i = 1 ; i < n ; i++){
		if(done == k){
			break;
		}
		if(s[i] != '0'){
			s[i] = '0';
			done++;
		}
	}
	cout << s << endl;
	return 0;
}
