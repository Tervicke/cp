#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int c=3;
		vector<string> v;
		int a[] = {0,0,0};
		map<string , int> m;
		while(c--){
			for(int i = 0 ; i < n ; i++)	{
				string x;
				cin >>x;
				m[x]++;
				v.push_back(x);
			}
		}
		for(int i = 0 ; i < v.size(); i++){
			int x = m.find(v[i])->second;
			if(x == 1){
				a[i/n]+=3;
			}
			if(x==2){
				a[i/n]+=1;
			}
		//cout <<  m.find(v[i])->first << " "<< x << " " << i << " "<<i/3 << endl;
			//cout << "UPDATED ARRAY -> " << a[0] <<" "<< a[1]<<" "<< a[2] << endl;
		}
		cout << a[0] <<" "<< a[1]<<" "<< a[2] << endl;
	}
	return 0;
}
