#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool isal = false;
	int a[] = {4,7,44,77,47,74,777,774,747,744,477,474,447,444};
	for(int e : a){
		if(n % e == 0){
			isal = true;
			break;
		}
	}
	if(isal){cout << "YES" << endl;}
	else{cout << "NO" << endl;}
	return 0;
}
