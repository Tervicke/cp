#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		string s;
		for (int i=0; i < n ; i++){
			cin >> ar[i];
		}
		for(int i = 0 ; i < n  - 2; i++){
			if(ar[i] == 'a' || ar[i] == 'e') {
				if(i != 0 && (ar[i-1] != 'a' && ar[i-1] != 'e') ){
					cout << "endl";
					s+=ar[i-1];
				}
				if(ar[i+2] != 'a' || ar[i+2] != 'e' ) {
					s+=ar[i+1];
				}
			}
			s+=".";
			cout << s << endl;
		}
	}	
	return 0;
}
