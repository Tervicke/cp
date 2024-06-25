#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sf = 0;
	int fs = 0;
	char last = ' ';
	for(int i = 0 ; i < n ; i++){
		char x;
		cin >> x;
		if(i!=0){
			if(x=='F' && last=='S'){
				fs++;
			}
			if(x=='S' && last=='F'){
				sf++;
			}
		}
		last = x;
	}
	if(fs > sf)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
