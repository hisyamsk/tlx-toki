#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
  char masukan[101];
  while (scanf("%s", masukan) != EOF) 
  {
  	string s = masukan;
	printf("%s\n", s.c_str());
  }
}