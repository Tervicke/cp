#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		string s;
		if(x <= 28){
			s+=(char(97));
			s+=(char(97));
			s += (char( 97 + (x-2) - 1 ));
		}
		else{
			s+=char(97 + 25 );
			x=x-26;
			if(x > 26){
					s+=char(96 + 26);
					x=x-26;
					s+=char(96 + x);
			}else {
				s+=char(96 + (x-1));
				s+=char(96 + 1);
			}
		}
		sort(s.begin() , s.end());
		cout << s << endl;	
	}
	return 0;
}
