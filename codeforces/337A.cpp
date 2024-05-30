#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int ar[m];
	int ans = numeric_limits<int>::max();
	for(int i =0 ; i< m;i++){
		cin >> ar[i];
	}
	sort(ar,ar+m);
	for(int i=0;i<m-(n-1);i++){
		if((ar[i+(n-1)]- ar[i]) < ans ){
			ans = ar[i+(n-1)]- ar[i];
		}
	}
	cout << ans << endl;
	return 0;
}
