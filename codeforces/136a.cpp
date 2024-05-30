#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int x;
	for(int i=1 ; i <= n ; i++){
		cin >> x;
		a[x-1] = i;
	}
	for(int i=0;i<n;i++){
			cout << a[i] << " " ;
	}
	return 0;
}
