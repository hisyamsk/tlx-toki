#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int arr[100][100], res[100][100];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			res[i][j] = arr[r-1-j][i];
		}
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			cout << res[i][j];
			if (j == r-1) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}
}
