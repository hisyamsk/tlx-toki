#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>


using namespace std;


int main() {
	long int n, val = 0, counter = 1, mod = 0, arr[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n); 
	int num = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] == num) {
			counter++;
			if (counter >= val) {
				mod = num;
				val = counter;
			}
		} else {
			num = arr[i];
			counter = 1;
		}
	}
	if (mod == 0){
		mod = arr[n-1];
	}
	cout << mod << endl;
}
