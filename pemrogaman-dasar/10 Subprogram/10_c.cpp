#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int pembalik(int x) {
	int temp = x;
	int ret = 0;

	while (temp > 0) {
		ret = (ret * 10) + (temp % 10);
		temp = round(temp / 10);
	}
	return ret;
}

int main() {
	int a, b, c;
	cin >> a >> b;
	a = pembalik(a);
	b = pembalik(b);
	c = pembalik(a+b);
	cout << c << endl;
}
