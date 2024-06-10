#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans =0;
		vector<int> v;
		for(int i = 0 ; i < n ; i++){
			char x;
			cin >> x;
			ans += x - '0';
			v.push_back(x - '0');
		}
		if(ans % 2 != 0){
			cout << "NO" << endl;
		}else{
			bool f = false;
			if(ans == 2){
				if(n == 2){
					cout << "NO" << endl;
					continue;
				}
				for(int i = 0 ; i < n - 1; i++){
					if(v[i] == 1 && v[i+1] == 1){
						cout << "NO" << endl;
						f = true;
						continue;
					}
				}
				if(!f){
					cout << "YES" << endl;
					continue;
				}
			}else{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}
