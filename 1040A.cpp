#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int v[2];
	cin >> n >> v[0]>> v[1];
	int a[n];
	for(int i = 0 ; i < n  ; i++){
		cin >> a[i];
	}
	int bi = n - 1;
	int ans = 0;
	for(int i = 0 ; i < n/ 2; i++){
		if(a[i] == a[bi]){
			if(a[i] == 2){
				ans += 2*min(v[0],v[1]);
			}
		}else{
			if(a[i] == 2){
				ans+=v[a[bi]];
			}
			else if(a[bi] == 2){
				ans += v[a[i]];
			}else{
				cout << -1 << endl;
				return 0;
			}
		}
		bi--;
	}
	if(n%2 == 1){
		if(a[n/2] == 2){
			ans += min(v[0],v[1]);
		}
	}
	cout << ans << endl;
	return 0;
}
