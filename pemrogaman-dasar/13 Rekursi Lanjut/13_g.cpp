#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

bool visited[128][128];
int m, n, k, b,count = 0; 
int arr[128][128];

void jawbreaker(int x, int y, int c) {
	if (x >= 0 && x < m && y >= 0 && y < n) {
		if (!visited[x][y]) {
			if (arr[x][y] == c) {
				visited[x][y] = true;
				count++;
				jawbreaker(x-1, y, c);
				jawbreaker(x+1, y, c);
				jawbreaker(x, y+1, c);
				jawbreaker(x, y-1, c);
			}
		}
	}
}

int main() {
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j =0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> b >> k;
	jawbreaker(b, k, arr[b][k]);
	cout << count * (count - 1) << endl;
}