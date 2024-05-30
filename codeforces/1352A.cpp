#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s ;
		cin >> s;
		int j = 1;
		vector<int> ar;
		for(int i = 0 ; i < s.length();i++){
			if(s[i] != '0'){
				ar.push_back((s[i] - '0')*pow(10,(s.length() - j )) ); 
			}
			j++;
		}
		cout << ar.size() << endl;
		for(int i = 0 ; i < ar.size(); i++){
			cout << ar[i] << " ";
		}
	}
	return 0;
}
