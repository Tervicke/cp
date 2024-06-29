#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string h;
	cin >> h;
	int x;
	int hc = 0;
	for(int i = 0 ; i < n ; i++){
		string x;
		cin >> x;
		string f = x.substr(0,3);
		string s = x.substr(5,7);
		if(f == h || s==h){
			hc++;
		}
	}
	if(hc % 2 == 0){
		cout << "home" << endl;
	}else{
		cout << "contest" << endl;
	}
	return 0;
}
