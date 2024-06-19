#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		map<int,vector<int>> m;
		cin >> n >> k;
		int f = 0;
		int l = 0;
		for(int i = 1; i <= n ; i++){
			int x;
			cin >> x;
			if(i==1){
				f=x;
			}if(i==n){
				l=x;
			}
			m[x].push_back(i);
		}
		if(l==f && m[l].size() >= k){
			cout << "YES" << endl;
			continue;
		}
		if(m[f].size() >= k && m[l].size() >= k){
			if(m[f][k-1] < m[l][m[l].size() - k]){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}else{
			cout << "NO" << endl;
		}

	}
	return 0;
}
