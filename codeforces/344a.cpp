#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string prev="";
	string cur;
	int ans;
	for(int i=0;i<n;i++){
		cin >> cur;
		if(cur!=prev){
			ans++;
		}
		prev=cur;
	}
	cout << ans;
	return 0;
}
