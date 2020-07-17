#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int k, n;
	cin >> s >> k;

	for (int i = 0; i < s.length(); i++) {
		n = (int) s[i];
		n += k;
		if (n > 122) {
			n -= 26;
		}
		s[i] = (char) n;
	}
	cout << s << endl;
}
			