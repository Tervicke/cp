#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		map<int,vector<int>> m;
		vector<int> b(n,1);
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			m[x].push_back(i);
		}
		int k = 0;
		for(auto p:m){
			if(p.second.size() >=2){
				k++;
			}
		}
		if(k>=2){
			k = 0;
			for(auto p:m){
				if(p.second.size() >= 2 && k==0){
					b[p.second[0]] = 2;
					k++;
					continue;
				}
				if(p.second.size() >= 2 && k==1){
					b[p.second[0]] = 3;
					k++;
					break;
				}
			}
			for(int i = 0 ; i < n ; i++){
				cout << b[i] << " ";
			}
			cout << endl;
		}else{
			cout <<"-1" << endl;
		}
	}
	return 0;
}
