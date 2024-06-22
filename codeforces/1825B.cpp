#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m ;
		vector<int> v(n*m,0);
		for(int i = 0 ; i < n*m ; i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		int size = n*m;
		long long ans1 = (v[size - 1] - v[1]) * ( std::min(n, m) - 1 ) + (v[size - 1] - v[0]) * std::min(n, m) * (std::max(n, m) - 1); 
		long long ans2 = (v[size - 2] - v[0]) * ( std::min(n, m) - 1 ) + (v[size - 1] - v[0]) * std::min(n, m) * (std::max(n, m) - 1); 
		cout << max(ans2 , ans1) << endl;
	}
	return 0;
}
