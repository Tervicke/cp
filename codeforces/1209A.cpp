#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	map<int,vector<int>> m;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] == -1){
			continue;
		}
		ans++;
		int base = a[i];
		for(int j = 0 ; j < n ; j++){
			if(a[j] % base == 0 && a[j] != -1){
				a[j] = -1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
