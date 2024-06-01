#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int msb = log2(n);
		cout << (1 << msb)  - 1 << endl;
	}
}
