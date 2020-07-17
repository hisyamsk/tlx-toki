#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			if (i != n)
			{
				cout << "* ";
			}
			else
			{
				cout << "*" << endl;
			}
		}
		else
		{
			if (i != n)
			{
				cout << i << " ";
			}
			else
			{
				cout << i << endl;
			}
		}
	}
}