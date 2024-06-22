#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a;
		vector<int> b;
		int val = 2;
		a.push_back(n*2 - 1);
		for(int i = 1 ; i < n ; i++){
			if(i % 2 == 1){
				a.push_back(val);
				val+=2;
			}
			else{
				a.push_back(n + i);
			}
		}
		for(int i = 1 ; i < n ; i++){
			if(i%2==1){
				b.push_back(i);
			}else{
				b.push_back(n+i - 1);
			}
		}
		b.push_back(n*2);
		for(int e : a){
			cout << e << " ";
		}
		cout << endl;
		for(int e : b){
			cout << e << " ";
		}
		cout << endl;
	}
	return 0;
}
