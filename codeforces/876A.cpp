#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	cin >> n;
	cin >> a;
	cin >> b;
	cin >> c;
	if(n == 1 || min(min(a,b),c) == a || min(min(a,b),c) == b){
		cout << min(min(a,b),c)*(n-1) << endl;
	}else{
		cout << min(a,b) + c*(n-2) << endl;
	}
} 
