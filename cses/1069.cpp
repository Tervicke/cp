#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	char p='A';
	int ans=0,cur=0;
	for(char d:s){
		if(d==p){
			cur++;
			ans = max(ans , cur);
		}else{
			 p=d;	
			 cur=1;
		}
	}
	cout << ans << endl;
	return 0;
}
