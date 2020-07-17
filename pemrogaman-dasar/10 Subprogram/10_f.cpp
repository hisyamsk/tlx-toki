#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;

long int arr[100][2], min_max[2];

void kedekatan(int n, int d) {
    int t, max = -9999999, min = 9999999;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            t = pow(labs(arr[i][0] - arr[j][0]), d) + pow(labs(arr[i][1] - arr[j][1]), d);
            if (t > max) {
                max = t;
            }
            if (t < min) {
                min = t;
            }
        }   
    }
    min_max[0] = min;
    min_max[1] = max;
}

int main() {
    int n, d, x, y;
    cin >> n >> d;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }
    kedekatan(n, d);
    cout << min_max[0] << " " << min_max[1] << endl; 
}
