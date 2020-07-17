#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		bool prime = true;
		cin >> x;

		if ((x == 1) || (x != 2) && (x % 2 == 0)) {
			prime = false;
		} else {
			int j = 3;
			while (j <= (int) sqrt(x)) {
				if (x % j == 0) {
					prime = false;
					break;
				} else {
					j += 2;
				}
			}
		}
		if (prime) {
			cout << "YA" << endl;
		} else {
			cout << "BUKAN" << endl;
		}
	}
}
