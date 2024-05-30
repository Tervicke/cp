#include <bits/stdc++.h>
#include <mutex>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a = 0 , b = 0;
		for(int i = 0 ; i < 5 ; i++){
			 char x;
			 cin >> x;
			 if(x == 'A'){
				 a++;
			 }else{
				 b++;
			 }
		}
		if(a > b){
			cout << "A" << endl;
		}else{
			cout << "B" << endl;
		}
	}
	return 0;
}
