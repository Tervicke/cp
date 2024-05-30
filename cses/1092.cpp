#include <bits/stdc++.h>
#include <ostream>
using namespace std;
int main(){
	 //x , x+1 , x+2 , x+ 3 => sum(x , x+3 ) , 
	int n;
	cin >> n ;
	if(n%4 == 0 || n % 4 == 3){
		cout << "YES"	 << endl;
		if(n % 4 == 0){
				int a[n/2];
				int b[n/2];
				int ai =0, bi =0;
				for(int i = 1 ; i <= n ; i++ ){
					if(i % 4 == 0 || i % 4 == 1){
						a[ai] = i; 
						ai++;
					}else{
						b[bi] = i; 
						bi++;
					}
				}
				cout << n/2 << endl;;
				for(int i = 0 ; i < n/2 ; i++){
					cout << a[i]  << " " ;
				}
				cout << endl << n/2 << endl;;
				for(int i = 0 ; i < n/2 ; i++){
					cout << b[i]  << " " ;
				}
			}
		else{
			int a[n/2 + 1];
			int b[n/2];
			int no=2;
			int i = 0 , j = n-1;
			a[0] = 1, a[1] = 2 , a[2] = 4;
			b[0] = 3;
			int bi=1,ai=3;
			for(int i=5 ; i <= n ; i++){
				if(i % 4 == 1 || i % 4 == 2 ){
					b[bi]=i;
					bi++;
				}else{
					a[ai] = i;
					ai++;
				}
			}
			cout << n/2 + 1<< endl;
			for(int i = 0 ; i < n/2 + 1; i++){
				cout << a[i] << " ";
			}
			cout << endl << n/2 << endl;
			for(int i = 0 ; i < n/2; i++){
				cout << b[i] << " ";
			}
		}
	}
	else{
		cout << "NO"<< endl;
	}
	return 0;
}
// 1 2 3 4 5 6 7 8
// 8 1 4 5
// 7 3 2 6
// 1 2 3 4 5 6 7 8 9 10 11 12
// 12 1 9 4   
// 11 2 10 3 
// 4(x , x + 3) = 4(x + 1 , x + 2)
// 1 2 3 4 5 6 7 
// 1 2 4 7
// 3 5 6 
// 1 2 3 4 5 6 7 8 9 10 11
// 11 9 6 4 2 | 1
// 10 8 7 5 3 
// 1 2 3 4 5 6 7 
// 2 4 6 1
// 3 5 7  
// 7
// 1 2 4 7
// 3 5 6 
// 4 
// 2 4 1 
// 3 4(1) + 1 , 4(1) + 2 
