#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
		string s1, s2, s3, s4;
		cin >> s1 >> s2 >> s3 >> s4;
		s1.erase(s1.find(s2), s2.length());
		int index = s1.find(s3) + s3.length();
		s1.insert(index, s4);
		cout << s1 << endl;
}
