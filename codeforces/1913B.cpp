#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int z=0;
		int o=0;
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i]=='0'){
				z++;
			}else{
				o++;
			}
		}
		//cout << z << " " << o << endl;
		string st="";
		int index = 0;
		for(int i = 0 ; i < s.size() ; i++){
			char ch = s[index];
			if(ch =='1' && z>0){
				st+='0';
				z--;
				index++;
			}
			if(ch == '0' && o>0){
				st+='1';
				o--;
				index++;
			}
		}
		cout << s.size() - st.size() << endl; 
	}
	return 0;
}
