#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a , b, c;
		cin >> a >> b >> c;
		string f=a+b+c;
		int ar[3]={0};
		for(int i=0;i<9;i++){
			if(f[i]=='A')
				ar[0]++;
			if(f[i]=='B')
				ar[1]++;
			if(f[i]=='C')
				ar[2]++;
		}
		if(ar[0] != 3)
			cout << "A" << endl;
		else if(ar[1] != 3)
			cout << "B" << endl;
		else 
				cout << 'C' << endl;

	}
	return 0;
}
