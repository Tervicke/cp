#include<bits/stdc++.h>
using namespace std;
int dcount(int num){
	string s = to_string(num);
	long long count = 0;
	for(int i = 0 ; i < s.size() ; i++){
		count += s[i] - '0';
	}
	return count;
}
int main(){
	int n;
	cin >> n;
	int temp = 19;
	int count = 0;
	while(count != n){
		if(dcount(temp) == 10){
			count++;
		}
		temp++;
	}
	cout << temp - 1<< endl;
	return 0;
}
