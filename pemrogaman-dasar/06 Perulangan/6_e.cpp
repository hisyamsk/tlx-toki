#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	float n;
	int m;
	cin >> n;
	m = int(n);
	if (n == 1) {
		cout << "ya" << endl;
	}
	else if (m % 2 != 0) {
		cout << "bukan" << endl;
	} else {
		while (n > 1) {
			n = n / 2;
		}
		if (n == 1) {
			cout << "ya" << endl;
		} else {
			cout << "bukan" << endl;
		}
	}
}