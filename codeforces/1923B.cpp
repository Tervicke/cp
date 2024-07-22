#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
bool custom_sort(const pair<long long,long long>& a , const pair<long long,long long>& b){
	return a.second < b.second ;
}
void solve(){
	long long n,k;
	cin >> n >> k;
	vector<pair<long long,long long>> v;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		v.push_back({x,0});
	}

	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		v[i].second = abs(x);
	}
	sort( v.begin(),v.end() , custom_sort );
	long long left =  0;
	long long index = 0;
	for(long long i = 0 ; i < n ; i++){
		int total_bullet = 0;
		while(v[index].second == i+1){
			total_bullet += v[index].first;
			index++;
		}
		if(total_bullet > k + left){ 
			cout << "NO" << endl;
			return;
		}else{
			left = (k + left )- (total_bullet);
		}
	}
	cout << "YES" << endl;
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
