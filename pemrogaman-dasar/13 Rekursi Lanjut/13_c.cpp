#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int n, arr[100];
bool pernah[100];

void tulis(int kedalaman) {
	if (kedalaman >= n) {
		bool zigzag = true;
		for (int i = 1; i < n-1; i++) {
			bool cond1 = arr[i] > arr[i-1] && arr[i] > arr[i+1];
			bool cond2 = arr[i] < arr[i-1] && arr[i] < arr[i+1];
			if (!(cond1 || cond2)) {
				zigzag = false;
			}
		}
		if (zigzag) {
			for (int i = 0; i < n; i++) {
				cout << arr[i];
			}
			cout << endl;
		}
	} else {
		for (int i = 1; i <= n; i++) {
			if (!pernah[i]) {
				pernah[i] = true;
				arr[kedalaman] = i;
				tulis(kedalaman + 1);	
				pernah[i] = false;
			}
		}
	}
}


int main() {
	cin >> n;
	tulis(0);
}
