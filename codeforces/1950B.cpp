#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int f = 2;
		int x = 0;
		for(int i = 0 ; i < n ; i++){
			f=2;
			while(f--){
				for(int j = 0 ; j < n ; j++){
					if(x%2 == 0){
						cout << "##";
						x++;
					}else{
						cout << "..";
						x++;
					}
				}
				cout << endl;
				if(n%2 !=  0 && f==1){
					x++;
				}
			}
			if(n%2==0){
				x++;
			}
		}
	}
	return 0;
}
