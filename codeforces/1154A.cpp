#include <bits/stdc++.h>
using namespace std;
int main(){
	long long ar[4];
	for(int i=0;i < 4 ;i++){
		cin >> ar[i];
	}
	sort(ar,ar+4,greater<int>());
	cout << ar[0] - ar[1] << " " <<  ar[0] - ar[2]<< " " << ar[0] - ar[3];
	return 0;
}

