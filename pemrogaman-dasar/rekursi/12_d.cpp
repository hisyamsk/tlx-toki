#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void f(string s) {
	if (s.length() == 1 || s.length() == 0) {
		cout << "YA" << endl;
	} else {
		if (s[0] == s[s.length()-1]) {
			s.erase(0, 1);
			s.erase(s.length()-1, 1);
			f(s);
		} else {
			cout << "BUKAN" << endl;
		}
	}
}

int main() {
	string s = "a";
	cin >> s;
	f(s);
}