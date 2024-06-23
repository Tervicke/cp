#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,c,d;
		cin >> n >> c >> d;
		vector<int> b(n*n);
		for(int i = 0 ; i < n*n ; i++){
			cin >> b[i];
		}
		sort(b.begin(),b.end());
		vector<int> req;
		int a = b[0];
		for(int i = 0 ; i < n ;i++){
			for(int j = 0 ; j < n ; j++){
				req.push_back(a + j*c);
			}
			a+=d;
		}
		sort(req.begin(),req.end());
		bool flag = true;
		for(int i =  0 ; i < n*n ; i++){
			if(b[i] != req[i]){
				flag = false;
				break;
			}
		}
		if(flag){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
