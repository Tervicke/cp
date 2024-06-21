#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> fa(2*n + 1);
		vector<int> fb(2*n + 1);
		int last = 0;
		int cur_max = 1;
		for(int i = 0 ; i < n ; i++){

			int x;
			cin >> x;
			if(i!=0){
				if(last == x){
					cur_max++;
				}else{
					fa[last] = max(cur_max,fa[last]);
					cur_max = 1;
				}
			}
			last = x;
		}
		fa[last] = max(cur_max,fa[last]);
		cur_max = 1;
			for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			if(i!=0){
				if(last == x){
					cur_max++;
				}else{
					fb[last] = max(cur_max,fb[last]);
					cur_max = 1;
				}
			}
			last = x;
		}
		fb[last] = max(cur_max,fb[last]);
		int ans = 0;
		for(int i = 1 ; i <= 2*n ; i++){
			ans = max(ans , fa[i] + fb[i]);
		}
		cout << ans << endl;

	}
	return 0;
}
