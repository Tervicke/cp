#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		set<int> s;
		for(int i = 0 ; i < n ;  i++){
			cin >> ar[i];
		}
		for(int i = 0 ; i < n - 1 ; i++){
			s.insert( max(ar[i],ar[i+1]) );
		}
		cout << (*s.begin()) -1  << endl;
	}
	return 0;
}

