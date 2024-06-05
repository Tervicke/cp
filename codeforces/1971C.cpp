#include <bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		char s1=' ';
		char s2=' ';
		if(abs(a-b) == 1 || abs(c-d)==1){
			cout << "No" << endl;
			continue;
		}
		if((a == 12 && b==1 ) || (a == 1 && b == 12)){
			cout << "No" << endl;
			continue;
		}
		for(int i = min(a,b) ; i <=max(a,b) ; i++){
			if(c == i){
				s1='1';
			}
			if(d == i){
				s2='1';
			}

		}
		if(s1==' ')
			s1='2';

		if(s2==' ')
			s2='2';

		if(s1==s2){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}

	}
	return 0;
}
