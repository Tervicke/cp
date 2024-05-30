#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		string a , b, c;
		cin  >> x>> a >> b >> c;
		int ans=1;
		for(int i=0;i<x;i++){
			if(a[i] != c[i] && b[i] !=c[i])	{
				cout << "YES"<<endl;
				ans=0;
				break;
			}
		}
		if(ans){
			cout << "NO" << endl;
		}
	}
	return 0;
}
