#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		map<int,int> m;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			m[x]++;
		}
		bool f=false;
		for(auto pair : m){
			if(pair.second >= k){
				f=true;
				break;
			}
		}
		if(f){
			cout << k -1 << endl;
		}else{
			cout << n << endl; 
		}

	}
	return 0;
}
