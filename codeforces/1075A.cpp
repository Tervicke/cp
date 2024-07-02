#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long x,y;
	cin >> x >> y;
	long long wm = abs(x - 1) + abs(y - 1);
	long long bm = abs(x - n) + abs(y - n);
	if(x == 1 && y == 1){
		cout << "White" << endl;
		return 0;
	}
	if(x == n && y == n){
		cout << "Black" << endl;
		return 0;
	}
	if(wm <= bm){
		cout << "White" << endl;
	}else{
		cout << "Black" << endl;
	}
	return 0;
}
