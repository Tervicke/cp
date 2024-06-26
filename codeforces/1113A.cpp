#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,total_fuel;
	cin >> n >> total_fuel;
	int city = 1;
	int current_fuel = total_fuel;
	int money;
	if(total_fuel >= n){
		money = n - 1;
	}else{
		money = total_fuel * 1;
	}
	while(city < n){
		current_fuel--;
		city++;
		int fuel_need = n - city;
		if(fuel_need > current_fuel){
			if(fuel_need > total_fuel){
				money += (total_fuel - current_fuel) * city; 
				current_fuel += total_fuel - current_fuel;
			}else{
				money += (fuel_need - current_fuel) * city; 
				current_fuel += fuel_need - current_fuel;
			}
		}
	}
	cout << money << endl;
	return 0;
}
