#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	double n, fl, ce;
	int fl1, ce1;
	scanf("%lf", &n);
	fl = floor(n);
	ce = ceil(n);
	fl1 = int(fl);
	ce1 = int(ce);
	printf("%d %d\n", fl1, ce1);	
}