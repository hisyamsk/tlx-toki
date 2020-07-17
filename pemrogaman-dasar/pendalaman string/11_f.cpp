#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ((int) s[i] == 95) {
			s.erase(i, 1);
			s[i] = (char) ((int) s[i] - 32);
		} else if ((int) s[i] > 64 && (int) s[i] < 91) {
			s[i] = (char) ((int) s[i] + 32);
			s.insert(i, "_");
		}
	}
	cout << s << endl;
}
