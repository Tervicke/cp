#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long a[n];
	long long b[n];
	long long total = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		total+=a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
	}
	sort(b , b+n , greater<int>());
	if(b[0] + b[1] >= total){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
