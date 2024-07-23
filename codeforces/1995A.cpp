#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	int n,k;
	cin >> n >> k;
	if(k == 0){
		cout << 0 << endl;
		return;
	}
	vector<int> v;
	for(int i = 1 ; i <= n ; i++)	{
		v.push_back(i);
	}
	for(int i = n-1  ; i > 0 ; i--){
		v.push_back(i);
	}
	sort(v.begin(),v.end() , greater<int>());
	int sum = 0;
	int index = 0;
	while(sum < k){
		sum += v[index];
		index++;
	}
	cout << index << endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
