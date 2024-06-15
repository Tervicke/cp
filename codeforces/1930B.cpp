#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		int r=n;
		int u=1;
		for(int i = 1 ; i <= n ; i++){
			if(i%2==0){
				cout << u << " ";
				u++;
			}else{
				cout << r << " ";
				r--;
			}
		}
		cout << endl;
	}
	return 0;
}
