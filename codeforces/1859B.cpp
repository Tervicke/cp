#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> sl_mins;
		vector<int> mins;
		for(int i = 0 ; i < n ; i++){
			int s;
			cin >> s;
			vector<int> v;
			for(int j = 0 ; j < s ; j++){
				int x;
				cin >> x;
				v.push_back(x);
			}
			sort(v.begin(),v.end());
			mins.push_back(v[0]);
			sl_mins.push_back(v[1]);
		}
		sort(sl_mins.begin(),sl_mins.end());
		sort(mins.begin(),mins.end());
		long long ans = 0;
		for(int i = 1 ; i < n ; i++){
			ans+=sl_mins[i];
		}
		ans+=mins[0];
		cout << ans << endl;
	}
	return 0;
}
