#include <bits/stdc++.h>
#include <bit>
using namespace std;
#define ll long long
//ALL THE BEST
const long long MOD = 10e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int total_elements = n - 2;
	pair<int,int> ans = {0,0};
	bool found = false;
	for(int i = 0 ; i < n; i++){
		if(a[i] > 0 && a[i] == a[i-1]){
			continue;
		}
		if(total_elements % a[i] != 0){
			continue;
		}
		int target = total_elements / a[i];
		int left = 0;
		int right = n;
		while(left <= right){
			int mid = (left + right) / 2;
			if(a[mid] == target){
				if(mid != i){
					ans.first = a[i];
					ans.second = a[mid];
					found = true;
					break;
				}
				if(mid > i){
					right = mid - 1;
				}else{
					left = mid + 1;
				}
			}else if(a[mid] > target){
				right = mid - 1;
			}else{
				left = mid + 1;
			}
		}
		if(found){break;}
	}
	cout << ans.first << " " << ans.second << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool multiple_test_cases = true;
	int t = 1;
	if(multiple_test_cases){
		cin >> t;
	}
	while(t--){
		solve();
	}
	return 0;
}
