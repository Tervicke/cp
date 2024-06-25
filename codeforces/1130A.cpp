#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	int p = 0;
	int ne = 0;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >>x;
		if(x > 0){
			p++;
		}
		if(x < 0){
			ne++;
		}
	}
	if( p >= ceil((double)n/2) ){
		cout << 1 << endl;
	}else if(ne >= ceil((double)n/2)){
		cout << -1 << endl;
	}else{
		cout << 0 << endl;
	}

	return 0;
}
