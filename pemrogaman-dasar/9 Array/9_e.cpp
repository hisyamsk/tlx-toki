#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, m, p;
	cin >> n >> m >> p;
	int a[n][m], b[m][p], res[n][p];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			res[i][j] = 0;
			for (int k = 0; k < m; k++) {
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			cout << res[i][j];
			if (j == p-1) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}
}
