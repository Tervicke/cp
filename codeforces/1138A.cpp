#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	vector<pair<int,int>> groups;
	int current_type = a[0];
	int current_streak = 1;
	for(int i = 1 ; i < n ; i++){
		if(a[i] == current_type){
			current_streak++;
		}else{
			groups.push_back({current_type,current_streak});
			current_type = a[i];
			current_streak = 1;
		}
	}
	groups.push_back({current_type,current_streak});
	int ans = -1;
	for(int i = 1 ; i < groups.size() ;i++){
		if(groups[i].first != groups[i-1].first) {
			ans = max(ans,min(groups[i].second,groups[i-1].second));
		}
	}
	cout << ans * 2 << endl;
	return 0;
}
