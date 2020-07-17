#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int f(int a, int b, int k, int x) {
	if (k == 1) {
		return abs(a*x + b);
	}
	x = abs(a*x + b);
	return f(a, b, k-1, x);
}

int main() {
	int a, b, k, x;
	cin >> a >> b >> k >> x;
	int res = f(a, b, k, x);
	cout << res << endl;
}