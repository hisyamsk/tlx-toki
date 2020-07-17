#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int arr[1000];

int f_prima(int x) {
	int index = 0, pembagi = 2;
	while (pembagi < x) {
		if (x % pembagi == 0) {
			x = x / pembagi;
			bool prime = true;
			for (int i = 2; i < pembagi; i++) {
				if (pembagi % i == 0) {
					pembagi++;
					prime = false;
					break;
				}
			}
			if (prime) {
				arr[index] = pembagi;
				index++;
			}
		} else {
			pembagi++;
		}
	}
	arr[index] = x;
	index++;
	return index;
}

int main() {
	int n, res, pangkat = 1;
	cin >> n;
	res = f_prima(n);
	if (res == 1) {
		cout << arr[0] << endl;
	} else {
		for (int i = 0; i < res; i++) {
			if (i == 0) {
				cout << arr[i];
			} else {
				if (arr[i] == arr[i-1]) {
					pangkat++;
					if (i == res-1) {
						cout << "^" << pangkat << endl;
					}
				} else {
					if (pangkat > 1) {
						cout << "^" << pangkat;
						pangkat = 1;
					}
					if (i == res-1) {
						cout << " x " << arr[i] << endl;
					} else {
						cout << " x " << arr[i];
					}
				}
			}
		}
	}
}
