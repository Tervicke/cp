#include <bits/stdc++.h>
using namespace std;
int main(){
	long  long n;
	long long one =0, two =0, three =0, four=0 ,x ,ans = 0;
	cin >> n;
	long long ar[n];
	for(int i=0;i<n;i++){
		cin >> x;
		if(x==4){
			four++;
		}
		if(x==3){
			three++;
		}
		if(x==2){
			two++;
		}
		if(x==1){
			one++;
		}
	}
	ans += four;
	ans += two/2;
	if(three > one){
		ans+=one;
		ans+=three-one;
		if(two%2!=0){
			ans+=1;
		}
	}
	else if(three == one){
		ans+=three;
		if(two%2!=0){
			ans+=1;
		}
	}else{
		ans+=three;
		long long rem = one - three;
		if(two%2!=0) {
			rem = rem - 2;
			ans+=1;
		}
		if(rem > 0){
			if(rem%4==0){
				ans+=rem/4;
			}else
				ans += rem/4 + 1 ;
		}
	}
	cout << ans ;
	return 0;
}
