#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string f(int n) {
	if (n == 1) {
		return "1";
	} else if (n % 2 == 1) {
		return f(n/2) + "1";
	} else {
		return f(n/2) + "0";
	}	
}

int main() {
	int n;
	cin >> n;
	string res = f(n);
	cout << res << endl;
}