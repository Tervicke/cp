#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	cin >> r >> c;
	char a[r][c];
	for(int i = 0 ; i  < r ; i++){
		for(int j = 0 ; j < c ; j++){
			char ch;
			cin >> ch;
			a[i][j] = ch;
		}
	}
	bool flag;
	for(int i = 0 ; i  < r ; i++){
		for(int j = 0 ; j < c ; j++){
			flag = false;
			if(j != c - 1){
				if(a[i][j] == 'S' && a[i][j+1] == 'W') { 
					flag = true; 
					break; 
				}
			}
			if(j != 0){
				if(a[i][j] == 'S' && a[i][j-1] == 'W') { 
					flag = true; 
					break; 
				}
			}
			if(i != 0){
				if(a[i][j] == 'S' && a[i-1][j] == 'W') { 
					flag = true; 
					break; 
				}
			}
			if(i != r - 1){
				if(a[i][j] == 'S' && a[i+1][j] == 'W') { 
					flag = true; 
					break; 
				}
			}
		}
		if(flag){
			break;
		}
	}
	if(flag){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
		for(int i = 0; i < r ; i++){
			for(int j = 0 ; j < c ; j++){
				if(a[i][j] == '.')
					cout << "D";
				else
					cout << a[i][j];
			}			
			cout << endl;
		}
	}
	return 0;
}
