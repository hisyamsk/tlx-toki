#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int f(int a, int b, int x) {
	int res = abs(a*x + b);
	return res;
}

int main() {
	int a, b, k, x, res;
	cin >> a >> b >> k >> x;
	for (int i = 0; i < k; i++) {
		res = f(a, b, x);
		x = res;
	}
	cout << res << endl;	
}
