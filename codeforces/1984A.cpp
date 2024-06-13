#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		if(a[0] == a[n-1]){
			cout << "NO" << endl;
			continue;
		}else{
			cout << "YES" << endl;
			string s(n,'R');
			s[1]='B';
			cout << s << endl;
		}
	}
	return 0;
}
