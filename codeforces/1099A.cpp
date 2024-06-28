#include <bits/stdc++.h>
using namespace std;
int main(){
	int w,h,u1,d1,u2,d2;
	cin >> w >> h;
	cin >> u1 >> d1 ;
	cin >> u2 >> d2;
	for(int i = h ; i > 0; i--){
		if(i == d2){
			w -=  u2;
		}
		if(i == d1){
			w -= u1;
		}
		w += i;
		if(w < 0)	{
			w = 0;
		}
	}
	cout << w << endl;
	return 0;
}
