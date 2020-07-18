#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int arr[128][128];
int res = 0, indeks = 0;
string str_res[128*128];

bool check(string s) {
	if (s.length() == str_res[indeks].length()) {
		return true;
	}
	return false;
}

void quadtree(int r, int c, int k, string s) {
	if (check(s)) {
		if (s == str_res[indeks]) {
			for (int i = r; i < r+k; i++) {
				for (int j = c; j < c+k; j++) {
					arr[i][j] = 1;
				}
			}
			indeks++;
		}		
	} else {
		if (k > 1) {
			quadtree(r, c, k/2, s+"0");
			quadtree(r, c+(k/2), k/2, s+"1");
			quadtree(r+(k/2), c, k/2, s+"2");
			quadtree(r+(k/2), c+(k/2), k/2, s+"3");
		}
		
	}
}

int main() {
	int n;	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str_res[i];
	}

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

	quadtree(0, 0, power, "1");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (j == c-1) {
				cout << arr[i][j] << endl;
			} else {
				cout << arr[i][j] << " ";
			}
		}
	}
}
