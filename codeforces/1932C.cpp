#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long compute(vector<int > a , int m){
	long long int ans = 1;
	for(int i = 0 ; i < a.size() ; i++){
		ans *= a[i];
		//cout << i << "->" <<ans << endl;
	}
	//cout << "ans =>"<< ans << endl;
	return ans % m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		vector<int> a;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		cout << compute(a,m) << " ";
		for(int i = 0 ; i < n; i++){
			char c;
			cin >> c;
			if(c=='L'){
				if(a.size() == 1){
					break;
				}else{
					a.erase(a.begin());
					cout << compute(a,m) << " ";
				}
			}else{
				if(a.size() == 1){
					break;
				}else{
					a.erase(a.end() - 1);
					cout << compute(a,m) << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
