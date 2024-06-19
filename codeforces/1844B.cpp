#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n,0);
		v[0] = 2;
		if(n==2){
			cout << 2 << " "<< 1 << endl;
			continue;
		}
		if(n==1){
			cout << 1 << endl;
			continue;
		}
		v[ n/2 ] = 1;
		int index = 1; 
		for(int i = 1 ; i <= n ; i++){
			if(i > 3){
				if(index == n/2){index++;}
				v[index] = i;
				index++;
			}

		}
		v[n-1]=3;
		for(int e : v){
			cout << e << ' ';
		}
		cout << endl;
	}
	return 0;

}
