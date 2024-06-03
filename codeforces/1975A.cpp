#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> ar;
		int b=0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >>x;
			ar.push_back(x);
		}

		if(is_sorted(ar.begin(),ar.end())){
			cout << "Yes" << endl;
			continue;
		}

		for(int i = 0 ; i < n; i++){
			if(ar[i] > ar[(i+1) % n]){
				b++;
			}
		}
		if(b!=1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
