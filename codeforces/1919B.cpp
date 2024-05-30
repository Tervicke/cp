#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int p = 0 , e = 0;
		for(int i=0;i<n;i++){
			char x;
			cin >> x;
			if(x=='+') p++;
			else e++;
		}
		n = max(p ,e ) - min(p ,e );
		cout << n << endl;
	}
	return 0;
}
