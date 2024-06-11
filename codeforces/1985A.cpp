#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1;
		string s2;
		cin >> s1 >> s2;

		cout << s2[0] << s1[1] << s1[2] << " ";
		cout << s1[0] << s2[1] << s2[2];
		cout << endl;
	}
	return 0;
}
