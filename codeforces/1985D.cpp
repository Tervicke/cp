#include <bits/stdc++.h>
using namespace std;
/*
int f(vector<int> a) {
	int pos = 0;
	map<int,pair<int,int>> m;
	for(int i = 0; i < a.size() ; i++){
		if(m.find(a[i]) != m.end()){
			m[a[i]].first++;
		}else{
			m[a[i]] = make_pair(1,i);
		}
	}
	for(auto pair:m){
		if(pair.second.first == 1){
			pos = pair.second.second;
		}
	}
	return pos + 1;
}
*/
int f(vector<int>& a){
	int ma = -1;
	int pos = -1;
	for(int i = 0 ; i < a.size() ; i++){
		if(a[i] > ma){
			pos = i +1;
			ma = a[i];
		}
	}
	return pos;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		vector<int> xv(x,0);
		vector<int> yv(y,0);
		int h  = 0;
		int k  = 0;
		for(int i = 0 ; i < x ; i++){
			for(int j = 0 ; j < y ; j++){
				char c;
				cin >> c;
				if(c == '#'){
					xv[i]++;
					yv[j]++;
				}
			}
		}
		cout << f(xv) << " " << f(yv) << endl;
	}
}
