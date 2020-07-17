#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int f(int x) {
	if (x == 1) {
		return 1;
	}
	if (x % 2 == 0) {
		return (x/2) * f(x-1);
	} else {
		return x * f(x-1);
	}
}

int main() {
	int n;
	cin >> n;
	int res = f(n);
	cout << res << endl;
}
