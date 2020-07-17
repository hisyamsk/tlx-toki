#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	int n, m = 0;
	while (scanf("%d", &n) != EOF)
	{
		m += n;
	}
	printf("%d\n", m);
}