#include <bits/stdc++.h>
using namespace std ;
int main(){
	long long n;
	cin >> n;
	if(n==1 ){
		cout << n << endl; 
	}
	else if(n==4){
		cout << "2" <<" " << "4"<< " " << "1"<< " " << "3" ;
	}
	else if(n<=3){
		cout << "NO SOLUTION";
	}else{
		long long x=n-1;
			while(n>0){
				cout << n << " ";
				n=n-2;
			}
			while(x>0){
				cout << x << " ";
				x=x-2;
			}
	}
	return 0;
}
