#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	vector<long long> a(n,0);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	long long mn = a[0];
	long long mx =  a[n-1];
	long long ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] > mn && a[i] < mx){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
