#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>> buckets(3);
	for(int i = 0 ; i < 3 ; i++){
		int x,y;
		cin >> x >> y;
		buckets[i].first = x;
		buckets[i].second = y;
	}
	for(int i = 1 ; i <= 100 ; i++){
			int ib = i%3 - 1 < 0 ? 2 : (i % 3) - 1 ;
			int fb = i%3;
			int milk = min( (buckets[fb].first - buckets[fb].second) , buckets[ib].second) ;
			buckets[fb].second += milk;
			buckets[ib].second -= milk;
	}
	for(auto buck : buckets){
		cout << buck.second << endl;
	}
	return 0;
}
