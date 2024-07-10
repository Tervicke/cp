#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,x,b,y;
	cin >> n >> a >> x >> b >> y;
	x--,y--,a--,b--;
	while(true){
		if(a==b){
			cout << "YES" << endl;
			return 0;
		}
		if(a == x || b == y){
			break;
		}
		a = (a + 1) % n;
		b = (b - 1 + n) % n;
	}
	cout << "NO" << endl;
	return 0;
}
