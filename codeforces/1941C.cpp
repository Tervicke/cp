#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n;
		cin >> s;
		int ans = 0;
		set<int> st; 
		for(int i = 0 ; i < n - 2 ; i++ ){
			if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
				st.insert(i+2);
				ans++;
			}
			if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
				ans++;
				st.insert(i);
			}
		}
		if(ans == 0){
			cout << 0 << endl;
			continue;
		}
		cout << std::min(static_cast<std::size_t>(ans),st.size()) << endl;
	}
	return 0;
}
