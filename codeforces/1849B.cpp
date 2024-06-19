#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){
	if (a.first != b.first) {
		return a.first > b.first; // Descending order for the first element
	}
	return a.second < b.second; 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<pair<int,int>> v;
		for(int i = 1 ; i <= n ; i++){
			int x;
			cin >>x;
			if(x % k == 0){
				x = k;
			}else{
				x = x%k;
			}
			v.push_back({x,i});
		}
		sort(v.begin(),v.end(),comp);
		for(pair e:v){
			cout << e.second << " ";
		}
		cout << endl;
	}
	return 0;
}
