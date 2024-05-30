#include <bits/stdc++.h>
using namespace std; 
int main(){
	long long n,x,sum;
	cin >> n;
	for(int i =  0 ; i < n; i++){
		for(int i = 0 ;  i < 3 ;i++){
			cin >> x;
			sum += x;
		}
		cout << sum -1 << endl;
		sum=0;
	}
	return 0;
}
