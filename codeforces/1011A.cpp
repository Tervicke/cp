#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	vector<char> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin() , v.end());
	long long ans = 0;
	string s="";
	for(int i = 0 ; i < n ; i++){
		if(s.size() == k){
			break;
		}
		if(s.size() == 0 || v[i] - s[s.size()-1]  >= 2){
			s+=v[i];
			ans+=v[i]-'a'+1;
		}
	}
	if(s.size() == k){
		cout << ans << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;
}
