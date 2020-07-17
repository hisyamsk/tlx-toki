#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int n, q, arr[2][1001];

void swap(int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
}

int main() {
	cin >> n;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		char buff1[5], buff2[5];
		int x, y;
		scanf("%s %d %s %d", buff1, &x, buff2, &y);
		
		int P = buff1[0] - 'A';
		int Q = buff2[0] - 'A';
		x--;
		y--;
		swap(arr[P][x], arr[Q][y]);		
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
			if (j == n-1) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}
}
