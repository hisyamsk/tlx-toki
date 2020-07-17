#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	int n;
	int res = 0;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		res += x;
	}
	cout << res << endl;	
}
