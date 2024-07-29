#include <bits/stdc++.h>
using namespace std;

const int LEN = 100;

int main() {
	//freopen("speeding.in", "r", stdin);
	//freopen("speeding.out", "w", stdout);

	int N, M;
	cin >> N >> M;

	int start = 0;
	vector<int> limit(LEN);
	for (int i = 0; i < N; i++) {
		int length, speed;
		cin >> length >> speed;
		for (int j = start; j < start + length; j++) { limit[j] = speed; }
		start += length;
	}

	start = 0;
	vector<int> bessie(LEN);
	for (int i = 0; i < M; i++) {
		int length, speed;
		cin >> length >> speed;
		for (int j = start; j < start + length; j++) { bessie[j] = speed; }
		start += length;
	}

	int worst = 0;
	for (int i = 0; i < LEN; i++) { worst = max(worst, bessie[i] - limit[i]); }
	cout << worst << endl;
}
