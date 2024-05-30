#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string ans="";
		int res[26]={0};
		int n,cur=0;
		cin >> n;
		for(int i = 0; i < n ; i++){
			int f;	
			cin >> f;
			if(f==0){
				ans+=char(97+cur);
				res[cur]+=1;
				cur++;
			}
			else{
				for(int j=0;j<26;j++){
					if(res[j]==f){
						ans+=char(97+j);
						res[j]++;
						break;
					}
				}
			}
		}
		cout << ans<< endl;
	}
	return 0;
}
