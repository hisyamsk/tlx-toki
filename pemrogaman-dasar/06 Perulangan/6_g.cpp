#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int n, m;
	int min = 100000;
	int max = -100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m > max) {
			max = m;
		}
		if (m < min) {
			min = m;
		}
	}
	cout << max << " " << min << endl;
}