#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	double t;
	cin >> n;
	for(int i =0 ; i < n ; i++){
		cin >> x;	
		t+=(float)x/100;
	}
	cout << float(t/n)*100;
	return 0;
}
