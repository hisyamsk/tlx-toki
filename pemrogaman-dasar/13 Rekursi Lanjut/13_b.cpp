#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void draw(int n) {
	if (n > 0) {
		draw(n-1);
		for (int i = 0; i < n; i++) {
			cout << "*";
		}
		cout << endl;
		draw(n-1);
	}
}


int main() {
	int n;
	cin >> n;

	draw(n);
}
