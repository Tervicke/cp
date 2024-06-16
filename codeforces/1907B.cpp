#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<pair<int,char>> u;
		vector<pair<int,char>> l;
		int index=0;
		for(int i = 0 ; i < s.size() ; i++){
			if(isupper(s[i])){
				if(s[i] != 'B'){
					u.push_back({index,s[i]});
					index++;
				}else{
					if(!u.empty()){u.pop_back();}
				}
			}else{
				if(s[i] != 'b'){
					l.push_back({index,s[i]});
					index++;
				}else{
					if(!l.empty()){l.pop_back();}
				}
			}
		}
		for(auto p:l){
			u.push_back(p);
		}
		sort(u.begin(),u.end());
		for(auto p : u){
			cout << p.second;
		}
		cout << endl;
	}
	return 0;
}
