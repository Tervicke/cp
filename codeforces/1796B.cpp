#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	string a,b;
	cin >> a >> b;
	if(a[0] == b[0]){
		cout << "YES" << endl;
		cout << a[0] << "*" << endl;
		return;
	}

	if(a[a.size() - 1] == b[b.size() - 1]){
		cout << "YES" << endl;
		cout << "*"<< a[a.size() - 1] << endl;
		return;
	}
	set<string> s;
	string ans = "";
	string temp = "";
	for(int i = 0 ; i < a.size() - 1 ; i++){
		temp.push_back(a[i]);
		temp.push_back(a[i+1]);
		s.insert(temp);
		temp="";
	}
	for(int i = 0 ; i < b.size() - 1 ; i++){
		temp.push_back(b[i]);
		temp.push_back(b[i+1]);
		if(s.find(temp) != s.end()){
			ans = temp;
			break;
		}
		temp = "";
	}
	if(ans != ""){
		cout << "YES" << endl;
		cout << "*" << ans << "*" << endl;
	}else{
		cout << "NO" << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
