#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
	for(int i = 0 ; i < v.size() ; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		if(m == 0){
			cout << n;
			continue;
		}
		vector<int> v(n+1);	
		for(int i = 0 ; i < n+1; i++){
			v[i] = i;
		}
		for(int j = 0 ; j < m ; j++){
			for(int i = 0 ; i < n+1  ; i++){
				if(i==0)
					v[i] = v[i] | v[i+1];
				else
					v[i] = v[i-1] | v[i] | v[i+1];
			}
			print(v);
		}
		cout << v[n] << endl;
	}
	return 0;
}
