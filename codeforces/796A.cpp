#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin >> n >> m >> k;
	int a[n];
	for(int i = 0  ; i < n ; i++){
		cin >> a[i];
	}
	int dist = INT_MAX;
	for(int i = 0 ; i < n ; i++){
		if(a[i] != 0 && a[i] <= k){
			dist = min(dist,(abs(m-1 - i))*10);
		}
	}
	cout << dist << endl;
	return 0;
}
