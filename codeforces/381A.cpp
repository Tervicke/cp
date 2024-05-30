#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ar[n];
	for(int i = 0 ; i < n ; i++){
		cin >> ar[i];
	}
	sort(ar , ar + n , greater<int>());
	long long s = 0 , d = 0;
	for(int i = 0 ; i < n ; i++){
		cout << ar[i] << " ";
	}
	cout << endl;
	for(int i = 0 ; i < n ; i++){
		if(i%2 == 0){
			s+=ar[i];
		}else{
			d+=ar[i];
		}
	}
	cout << s << " " <<d << endl;
	return 0;
}
