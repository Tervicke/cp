#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		vector<int> v(k,0);
		for(int i = 0; i < k ; i++){
			cin >> v[i];
		}
		long long ans = 0;
		sort(v.begin(),v.end());
		for(int i = 0 ; i < k - 1 ; i++){
			if(v[i] > 1){
				ans += v[i] - 1;
				ans += v[i];
			}else{
				ans+=1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
