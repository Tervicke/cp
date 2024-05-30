#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b ;
		if(a%2!=0 && b%2!=0){
			cout << "No";
		}
		else if(a%2==0 && b%2==0){
			cout << "Yes";
		}
		else{
			if(a%2!=0){
				if(b/2 + a*2 == a+b)
					cout << "No";
				else
					cout << "Yes";
			}
			else if(b%2!=0){
				if(a/2 + b*2 == a+b)
					cout << "No";
				else
					cout << "Yes";
			}
			else{
				cout << "Yes";
			}
		}
		cout << endl;
	}
}
