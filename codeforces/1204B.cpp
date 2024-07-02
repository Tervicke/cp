#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, l , r;
	cin >> n >> l >> r;
	int min = (n-l+1)*1;
	for(int i = 1 ; i <= l - 1 ; i++){
		min += 1<<i; 
	}
	int max = 0;
	int x = 1;
	for(int i = 0 ; i < n ; i++){
		if(i == r-1){
			break;
		}
		max += 1<<i;
	}
	max += (n-r+1)*(1<<r-1);
	cout << min << " " << max << endl;
	return 0;
}
