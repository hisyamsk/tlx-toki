#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

char buff[100];

int main() 
{
   scanf("%[^\n]", buff);
   string s = buff;
   printf("%s\n", s.c_str());
}