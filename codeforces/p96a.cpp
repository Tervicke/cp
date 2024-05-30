#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int k=0; // 1 
	int j=0; // 0
	bool ans = false;
	for(int i = 0;i <s.length() ; i++){
		if(s[i] == '1'){
			j=0;
			k++;
		}
		else{
			k=0;
			j++;
		}
		if(j==7 || k==7){
			ans = true;
		}
	}
	if(ans)
		cout << "YES";
	else 
		cout << "NO";

	return 0;
}
