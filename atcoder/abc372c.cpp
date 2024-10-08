#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void solve(){
	int n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	int last_count = 0;
	s +="xx";
	s = "xx" + s;
	n = s.size();
	for(int i = 0 ; i < n-2 ; i++){
		if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
			last_count++;
		}
	}
	while(q--){
		char c;
		int p;
		cin >> p >> c;
		p+=2;
		p--;
		//being the first

		string t1,u1;
		t1 += c;
    t1 += s[p + 1];
    t1 += s[p + 2];

    u1 += s[p];
    u1 += s[p + 1];
    u1 += s[p + 2];

		if(t1 == "ABC"){
			last_count++;
		}
		if(u1 == "ABC"){
			last_count--;
		}

		string t2, u2;

    t2 += s[p - 1];
    t2 += c;
    t2 += s[p + 1];

    u2 += s[p - 1];
    u2 += s[p];
    u2 += s[p + 1];

		if(t2 == "ABC"){
			last_count++;
		}
		if(u2 == "ABC"){
			last_count--;
		}

		string t3, u3;

    t3 += s[p - 2];
    t3 += s[p - 1];
    t3 += c;

    u3 += s[p - 2];
    u3 += s[p - 1];
    u3 += s[p];

		if(t3 == "ABC"){
			last_count++;
		}
		if(u3 == "ABC"){
			last_count--;
		}
		cout << last_count << "\n";
		s[p] = c;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
