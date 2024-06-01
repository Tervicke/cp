#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int s,d = 0;
	bool st = true;	
	int bv = n-1;
	int fv = 0;
	int ar[n];
	for(int i = 0 ; i < n ; i++){
		cin >> ar[i];
	}
	while(n--){
		int gv = 0;
		if(ar[fv] > ar[bv]){
			gv = ar[fv];
			fv++;	
		}else{
			gv = ar[bv];
			bv--;
		}
		if(st){
			s += gv; 
		}
		else{
			d += gv;
		}
		st =!st;
	}	
	cout << s << " "<<d << endl;
}
