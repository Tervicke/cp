#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;
int main(){
	int n,current=0 ,ans=0;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin >> ar[i];
	}
	for(int i=0; i < n-1 ;i++){
		if(ar[i] <= ar[i+1]){
			current++;
		}else{
			current =0;
		}
		ans = max(current , ans);
	}
	cout << ans + 1;
}
