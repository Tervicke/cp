#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string s1="",s2=""; 
		int n = 0;
		for(int i = 0 ; i < s.length() - 1; i++){
			if(s[i] == '0' && s[i+1] != '0'){
				n = i;
				break;
			}
		}
		if(n!=0){
			for(int i = 0 ;i<n+1 ; i++){
				s1+=s[i];
			}
			for(int i = s1.length() ; i < s.length() ; i++){
				s2+=s[i];
			}
		}
		if(n==0){
			cout << s[0]  << " ";
				for(int i=1; i<s.length();i++){
					cout << s[i];
				}
				cout << endl ;
		}
		else if(stoi(s1) < stoi(s2)){
			cout << s1 << " " << s2 << endl;
		}else{
			cout << "-1" << endl;
		}
	}
	return 0;
}
