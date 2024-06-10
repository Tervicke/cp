#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		if((b+c) % 2 == 0)
			cout << 1 << " ";
		else
			cout << 0 << " ";

		if((a+c) % 2 == 0)
			cout << 1 << " ";
		else
			cout << 0 << " ";

		if((a+b) % 2 == 0)
			cout << 1 << " ";
		else
			cout << 0 << " ";

		cout << endl;
	}
	return 0;
}
