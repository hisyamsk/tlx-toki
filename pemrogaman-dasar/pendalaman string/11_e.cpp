#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		int ascii = (int) s[i];
		if (ascii < 97) {
			s[i] = (char) (s[i] + 32);
		} else {
			s[i] = (char) (s[i] - 32);
		}
	}
	cout << s << endl;
}
