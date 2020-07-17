#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int arr[128][128];
int res;
string str_res[128*128];

bool homogen(int r, int c, int k) {
	int val = arr[r][c];
	for (int i = r; i < r+k; i++) {
		for (int j = c; j < c+k; j++) {
			if (arr[i][j] != val) {
				return false;
			}
		}
	}
	return true;
}

void quadtree(int r, int c, int k, string s) {
	if (homogen(r, c, k)) {
		if (arr[r][c] == 1) {
			str_res[res] = "1" + s;
			res++;
		}
	} else {
		quadtree(r, c, k/2, s+"0");
		quadtree(r, c+(k/2), k/2, s+"1");
		quadtree(r+(k/2), c, k/2, s+"2");
		quadtree(r+(k/2), c+(k/2), k/2, s+"3");
	}
}

int main() {
	int r, c;
	cin >> r >> c;

	int power = 1;
	int max_rc = max(r, c);
	while (power < max_rc) {
		power *= 2;
	}

	for (int i = 0; i < power; i++) {
		for (int j = 0; j < power; j++) {
			arr[i][j] = 0;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	res = 0;
	quadtree(0, 0, power, "");

	cout << res << endl;
	for (int i = 0; i < res; i++) {
		cout << str_res[i] << endl;
	}
}
