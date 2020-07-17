#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n, x, counter;
	cin >> n;

	for (int i = 0; i < n; i++) {
		bool a_prime = true;
		cin >> x;
		int j = 2;
		counter = 0;

		while (j < x) {
			if (counter > 2) {
				a_prime = false;
				break;
			} else {
				if (x % j == 0) {
					counter++;
					j++;
				} else {
					j++;
				}
			}
		}
		if (a_prime) {
			cout << "YA" << endl;
		} else {
			cout << "BUKAN" << endl;
		}
	}
}