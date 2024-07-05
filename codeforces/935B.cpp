#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	string s;
	cin >> s;
	long long x = 0; 
	long long y = 0;
	long long ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(i!=1){
			if(x == y){
					if(s[i-1] == s[i])
						ans++;
			}
		}
		if(s[i] == 'U')
			y++;
		else
			x++;
	}
	cout << ans << endl;
	return 0;
}
