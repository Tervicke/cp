#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		vector<int> v;
		int cur = 0;
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			if(x == '#'){
				v.push_back(cur);
				cur = 0;
			}
			else{
				cur++;
			}
		}
		v.push_back(cur);
		for(int i = 0 ; i < v.size() ; i++){
			if(v[i] >= 3){
				ans = 2;
				break;
			}else{
				ans += v[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
