#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		if(m > n){
			cout << "NO" << endl;
			continue;
		}
		queue<int> q;
		unordered_set<int> visited;
		q.push(n);
		bool found = false;
		while(!q.empty()){
			int current = q.front();
			q.pop();

			if(current == m){
				found = true;
				break;
			}

			if(current % 3 == 0){
				q.push(current/3);
				q.push((current*2)/3);
			}
			visited.insert(current);
		}
		if(found){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
