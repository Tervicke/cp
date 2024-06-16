#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0 ; i < 2*n ; i++){
			int x;
			cin >>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end(),greater<int>());
		int ans=0;
		for(int i = 0 ; i < 2*n ; i++){
			if(i % 2 == 1){
				ans+=v[i];
			}
		}
		cout << ans <<endl;
	}
	return 0;
}
