#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> shell1 = {1,0,0};
	vector<int> shell2 = {0,1,0};
	vector<int> shell3 = {0,0,1};
	vector<int> ans(3,0);
	for(int i = 0 ; i < n ; i++){
		int a,b,c;
		cin >> a >> b >> c;

		swap(shell1[a],shell1[b]);
		swap(shell2[a],shell2[b]);
		swap(shell3[a],shell3[b]);

		if(shell1[c] == 1){
			ans[0]++;
		}
		if(shell2[c] == 1){
			ans[1]++;
		}
		if(shell3[c] == 1){
			ans[2]++;
		}
	}
	sort(ans.begin(),ans.end());
	cout << ans[2] << endl;
	return 0;
}
