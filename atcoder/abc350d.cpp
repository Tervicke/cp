#include <bits/stdc++.h>
using namespace std;
//ALL THE BEST
#define ll long long
void dfs(vector<ll> graph[] , ll node , vector<bool>& vis,ll& nodes, ll& edges){
	if(vis[node]){
		return;
	}
	vis[node] = true;
	nodes++;
	for(auto child : graph[node]){
		edges++;
		dfs(graph,child,vis,nodes,edges);
	}
}

void solve(){
	ll n,m;
	cin >> n >> m;
	vector<ll> graph[n];
	vector<bool> vis(n,false);
	for(int i = 0 ;i < m ; i++){
		ll v1,v2;
		cin >> v1 >> v2;
		v2--;
		v1--;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	ll ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(vis[i]){
			continue;
		}
		ll nodes = 0;
		ll edges = 0;
		dfs(graph,i,vis,nodes,edges);
		edges/=2;
		ans += (nodes*(nodes-1)) / 2 - edges;
	}
	cout << ans << endl;
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

