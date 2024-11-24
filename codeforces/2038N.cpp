#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;
string get(int a , int b){
	string s;
	if(a>b){s = string(1,a+'0') + ">" + string(1,b+'0');}
	else if(a<b){s = string(1,a+'0') + "<" + string(1,b+'0');}
	else{s = string(1,a+'0') + "=" + string(1,b+'0');}
	return s;
} 
void solve() {
	string s;
	cin >> s;
	char c = s[1];
	int a = s[0] - '0';
	int b = s[2] - '0';
	bool flag = false;
	if(c == '='){
		flag = a == b ? true : false;
	}else if(c == '>'){
		flag = a > b ? true : false;
	}else{ // s[i] == "<"
		flag = a < b ? true : false;
	}
	cout << (flag ? s : get(a,b)) << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
