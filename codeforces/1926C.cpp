#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int res = 0;
		/*
		int j = 0;
		for(int i = 0 ; i <= n ; i++){
			if(i <= 9){
				res+=i;
			}else{
				res += i - 9*(j-1);
			}
			if(i%9==0){
				j += 1;
				res+=10;
			}
		cout << res << endl;
		}
		*/
		int s = 9;
		for(int i = 0 ; i < n / 9 ; i++ ){
			res += (s*(s+1))/2;
		}
		int x = n % 9;
		res+=(x*(x+1))/2;
		cout <<res << endl;
	}
	return 0;
}
