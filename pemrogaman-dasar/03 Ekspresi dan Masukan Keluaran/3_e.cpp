#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int a, t;
float x, hasil;

int main() 
{
    scanf("%d %d", &a, &t);
    x = a*t;
    hasil = x/2;
    printf("%.2f\n", hasil);
}