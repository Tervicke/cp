#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		string s1="Timur";
		cin >> n;
		cin >> s;	
		sort(s.begin(),s.end());
		sort(s1.begin(),s1.end());
		if( s == s1 ){
			cout << "YES";
		}else{
			cout << "NO";
		}
		cout << endl;
	}	
	return 0;
}
