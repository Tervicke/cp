#include <bits/stdc++.h>
#include <functional>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[n];
		int an[n];
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			ar[i] = x;
			an[i] = x;
		}
		sort(an , an + n , greater<int>());
		int m = an[0];
		for(int i = 0 ; i < n ; i++){
			if(ar[i] == m){
				cout << m - an[1] << " ";
			}else{
				cout << ar[i] - m << " " ;
			}
		}
		cout << endl;
	}
	return 0;
}
