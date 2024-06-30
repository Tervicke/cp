#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int n;
	cin >> n;
	vector<string> v;
	v.push_back(s1);
	v.push_back(s2);
	while(n--){
		string t1;
		cin >> t1;
		string t2;
		cin >> t2;
		if(t1 == s1){
			v.push_back(t2);
			v.push_back(s2);
			s1 = t2;
		}else { //t1 == s2
			v.push_back(t2);
			v.push_back(s1);
			s2 = t2;
		}
	}
	for(int i = 1 ; i < v.size() ; i+=2){
		cout << v[i-1] << " " << v[i] << endl;
	}
	return 0;
}
