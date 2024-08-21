#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ALL THE BEST
int query(int a , int b){
	cout << "? " << a << ' ' << b << endl;;
	cout.flush();
	int x;
	cin >> x;
	if(x == -1){exit(0);}
	return x;
}
void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> edges;
	for(int i=2;i<=n;i++){
		int ancestor = 1;			
		while(true){
			int mid = query(ancestor,i);
			if(mid == ancestor)
				break;
			ancestor = mid;
		}
		edges.push_back({ancestor,i});
	}
	cout << "! ";
	for(auto p : edges){
		cout << p.first << ' ' << p.second << ' ';
	}
	cout << endl;
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
