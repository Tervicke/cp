#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n;
		cin >> s;
		string res ="";
		while(!s.empty()){
			int x;
			if(s.back() == 'a' || s.back() == 'e'){
				x = 2;
			}else{
				x = 3;
			}
			while(x--){
				res += s.back();
				s.pop_back();
			}
			res += '.';
		}
		res.pop_back();
		reverse(res.begin(),res.end());
		cout << res << endl;
	}	
	return 0;
}
