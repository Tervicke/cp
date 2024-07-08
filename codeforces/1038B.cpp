#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1 || n == 2){
		cout << "No" << endl;
	}else{
		long long sum = (n*(n+1))/2;
		int x = 0;
		for(int i = 2 ; i <= n ; i++){
			if(sum % i == 0){
				x = i;
				break;
			}
		}
		if(x != 0){
			cout << "Yes" << endl;
			cout << 1 << " " << x;
			cout << endl;
			cout << n - 1 << " ";
			for(int i = 1 ; i <= n ; i++){
				if(i != x){
					cout << i << " ";
				}
			}
			cout << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}

