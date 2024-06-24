#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> v(3,0);
		for(int i = 0 ; i < 3 ; i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		int ans = abs(v[1] - v[0]) + abs(v[1] - v[2]);
		cout << ans << endl;
	}
	return 0;
}
