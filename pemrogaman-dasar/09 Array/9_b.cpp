#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main() {
	int i = 0, arr[100];
	while (cin >> arr[i]) {
		i++;
	}
	for (i = i - 1; i >= 0; i--) {
		cout << arr[i] << endl;
	} 
}
