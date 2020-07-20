#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	if (n > 0)
	{
		printf("positif\n");
	}
	else if (n < 0)
	{
		printf("negatif\n");
	}
	else
	{
		printf("nol\n");
	}
}