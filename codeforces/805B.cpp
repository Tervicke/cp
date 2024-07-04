#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << "a" << endl;
	}
	else if(n == 2){
		cout << "ab" << endl;
	}else{
		char a[] = {'b' , 'a' , 'a' , 'b'};
		for(int i = 1 ; i <= n ; i++){
			cout << a[i%4];
		}
	}
	cout << endl;
	return 0;
}
