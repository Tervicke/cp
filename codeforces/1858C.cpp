#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		unordered_set<int> v;
		set<int> s;
		s.insert(1);
		cout << 1 << " ";
		for(int i=2;i<=n;i++){
			if(s.find(i) == s.end()){
				s.insert(i);
				cout << i << " ";
			}
			int x = i*2;
			while(true){
				if(x > n){
					break;
				}
				if(s.find(x) == s.end()){
					s.insert(x);
					cout << x << " ";
				}
				x*=2;
			}
		}
		cout << endl;
	}
	return 0;
}
