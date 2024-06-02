#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool correct = true;
		int last_digit = -1;
		bool last_ch = true;//true if character 
		char last_char = '1';
		for(int i =0 ; i < n ; i++){
			char x;
			cin >> x;

			if(!islower(x) && !isdigit(x)){
				correct = false;
			}

			if( isdigit(x) ){
				if(last_ch && i!=0){
					correct = false;
				}

				last_ch = false;
				if( last_digit > (x - '0') ){
					correct = false;
				}
				last_digit = x - '0';
			}
			else{
				if(last_char > x){
					correct = false;
				}
				last_char = x;
				last_ch = true;
			}
			

		}
		if(!correct){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
	}
	return 0;
}
