#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
//ALL THE BEST
void solve(){
	int a1,a2,b1,b2;
	cin >> a1 >> a2 >> b1 >> b2;
	int ans = 0;
	//a1 b1
	if(a1 > b1){
		if(a2 > b2){
			ans += 1;
		}
		if(a2 == b2){
			ans += 1;
		}
	}	
	if(a1 == b1){
		if(a2 > b2){
			ans += 1;
		}
	}
	//a2 b2 - a1 b1
	if(a2 > b2){
		if(a1 > b1){
			ans +=1 ;
		}
		if(a1 == b1){
			ans += 1;
		}
	}
	if(a2 == b2){
		if(a1 > b1){
			ans +=1 ;
		}
	}
	//a2 b1
	if(a2 > b1){
		if(a1 > b2){
			ans +=1;
		}
		if(a1 == b2){
			ans +=1;
		}
	}
	if(a2 == b1){
		if(a1 > b2){
			ans +=1;
		}
	}
	//a1 b2
	if(a1 > b2){
		if(a2 > b1){
			ans +=1;
		}
		if(a2 == b1){
			ans +=1;
		}
	}
	if(a1 == b2){
		if(a2 > b1){
			ans +=1;
		}
	}
	cout << ans <<"\n";
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

