#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
void solve(){
	long long n,x,y;
	cin >> n >> x >> y;
	vector<long long> sweet(n);
	vector<long long> salt(n);
	for(int i = 0 ; i < n ; i++){
		cin >> sweet[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> salt[i];
	}
	sort(sweet.begin(),sweet.end(),greater<int>());
	sort(salt.begin(),salt.end(),greater<int>());
	long long sum = 0;
	long long a1 = 0;
	long long a2 = 0;
	for(long long i = 0 ; i < n ; i++){
		sum += sweet[i];
		if(sum > x){
			a1 = i +1;
			break;
		}
	}
	sum = 0;
	for(long long i = 0 ; i < n ; i++){
		sum += salt[i];
		if(sum > y){
			a2 = i + 1;
			break;
		}
	}
	if(a1 == 0){
		a1 = n;
	}
	if(a2 == 0){
		a2 = n;
	}
	cout << min(a1,a2) << endl;
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
