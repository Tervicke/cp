#include <bits/stdc++.h>
using namespace std;
int main(){
	int a , b;
	cin >> a >> b;
	int A = (6 - max(a,b)) + 1;
	if(A==3){
		cout << "1/2" << endl;
	}
	else if(A==6){
		cout << "1/1" << endl;
	}
	else if(A%2==0){
		cout << (A/2)<<"/3" << endl;
	}
	else{
		cout << A<<"/6" << endl;
	}
	return 0;
}
// 6 - (6 - 4)
//
