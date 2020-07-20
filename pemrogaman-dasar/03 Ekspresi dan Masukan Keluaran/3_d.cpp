#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int n, m, hasil, sisa;

int main() 
{
    scanf("%d %d", &n, &m);
    hasil = n / m;
    sisa = n % m;
    printf("masing-masing %d\nbersisa %d\n", hasil, sisa);
}