#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		set<int> a;
		set<int> b;
		set<int> s;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >>x;
			if(x <= k){
				a.insert(x);
			}
		}
		for(int i = 0 ; i < m ; i++){
			int x;
			cin >>x;
			if(x <= k){
				b.insert(x);
			}
		}
		for(int e: a){
			s.insert(e);
		}
		for(int e: b){
			s.insert(e);
		}
		if(a.size() >= k/2 && b.size() >= k/2 && s.size() == k){
			cout << "YES" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}
