#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long n,m,a;
	cin >> n >> m >> a;
	long long value = ceil((double)n/a) * ceil((double)m/a); 
	cout << value << endl;
	return 0;
}
