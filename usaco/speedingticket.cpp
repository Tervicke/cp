#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> ideal;  
	vector<int> real;  
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < n; i++){
		int length,speed;
		cin >> length >> speed;
		vector<int> temp(length);
		for(int i = 0 ; i < length ; i++){
			temp[i] = speed;
		}
		ideal.insert(ideal.end(),temp.begin(),temp.end());
	}
	for(int i = 0 ; i < m; i++){
		int length,speed;
		cin >> length >> speed;
		vector<int> temp(length);
		for(int i = 0 ; i < length ; i++){
			temp[i] = speed;
		}
		real.insert(real.end(),temp.begin(),temp.end());
	}
	int ans = 0;
	for(int i = 0 ; i < 100 ; i++){
		if(ideal[i] < real[i]){
			ans = max(ans,real[i] - ideal[i]);
		}
	}
	cout << ans << endl;
	return 0;
}
