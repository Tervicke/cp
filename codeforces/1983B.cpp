#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> v1;
		vector<int> v3(m,0);
		for(int i = 0 ; i < n ; i++){
			int sum = 0;
			for(int j = 0 ;  j < m ; j++){
				char c;
				cin >> c;
				sum += c - '0';
				v3[j] += c - '0';
			}
			v1.push_back(sum);
		}
		vector<int> v2;
		vector<int> v4(m);
		for(int i = 0 ; i < n ; i++){
			int sum = 0;
			for(int j = 0 ;  j < m ; j++){
				char c;
				cin >> c;
				sum += c - '0';
				v4[j] += c - '0';
			}
			v2.push_back(sum);
		}
		bool flag = true;
		for(int i = 0 ; i < v1.size() ; i++){
			if(v1[i] % 3 != v2[i] % 3){
				flag = false;
				break;
			}
		}
		for(int i = 0 ; i < v3.size() ; i++){
			if(v3[i] % 3 != v4[i] % 3){
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
