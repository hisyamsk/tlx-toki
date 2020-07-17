#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n, x;
	x = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < i+1; j++) {
			cout << x;
			x++;
			if (x == 10) {
				x = 0;
			}
		}
		cout << endl;
	}
}