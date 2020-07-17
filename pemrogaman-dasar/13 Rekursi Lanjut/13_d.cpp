#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int n, k, arr[100];


void tulis(int kedalaman) {
	if (kedalaman >= k) {
		for (int i = 0; i < k; i++) {
			cout << arr[i];
			if (i == k-1) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	} else {
		for (int i = arr[kedalaman-1]+1; i <= n; i++){
			arr[kedalaman] = i;
			tulis(kedalaman + 1);
		}
	}
}

int main() {
	cin >> n >> k;
	tulis(0);
}
