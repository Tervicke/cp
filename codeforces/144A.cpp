#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	int ar[n];
	int max=0;
	int min=101;
	int max_pos;
	int min_pos;
	for(int i =0 ; i < n ; i++){
		cin >>x;
		if(x>max){
			max=x;
			max_pos=i+1;
		}
		if(x<=min){
			min=x;
			min_pos=i+1;
		}
	}
	int ans = (max_pos - 1) + (n - min_pos) ;
	if(max_pos>min_pos){
		cout << ans - 1 ;	
	}
	if(max_pos<min_pos){
		cout << ans;
	}
	return 0;
}
