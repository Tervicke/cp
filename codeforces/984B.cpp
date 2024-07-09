#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	char a[n][m];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			char c;
			cin >> c;
			if(c == '.'){
				c = '0';
			}
			a[i][j] = c;
		}
	}
	bool flag = false;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			int no_of_bombs = 0;
			if(a[i][j] != '*'){

				if( i!=0 ){ if(a[i-1][j] == '*') no_of_bombs++; }
				if( i!=0 && j != 0){ if(a[i-1][j-1] == '*') no_of_bombs++; }
				if( i!=0 && j != m-1){ if(a[i-1][j+1] == '*') no_of_bombs++; }
				if( i!=n-1){ if(a[i+1][j] == '*') no_of_bombs++; }
				if( i!=n-1 && j != 0){ if(a[i+1][j-1] == '*') no_of_bombs++; }
				if( i!=n-1 && j != m-1){ if(a[i+1][j+1] == '*') no_of_bombs++; }
				if( j!=0 ){ if(a[i][j-1] == '*') no_of_bombs++; }
				if( j!=m-1 ){ if(a[i][j+1] == '*') no_of_bombs++; }
				
				if(a[i][j] - '0' != no_of_bombs){
					flag=true;
					break;
				}
			}
		}
	}
	if(flag)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
