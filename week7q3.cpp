#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double arr[100], sum = 0, mean, variance = 0, stdDev;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " real numbers:\n";

    // Input using pointer
    double *ptr = arr;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    // Calculate sum using pointer
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    // Calculate mean
    mean = sum / n;

    // Calculate variance using pointer
    for (int i = 0; i < n; i++) {
        variance += pow(*(ptr + i) - mean, 2);
    }

    variance = variance / n;

    // Calculate standard deviation
    stdDev = sqrt(variance);

    cout << "\nSum = " << sum << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << stdDev << endl;

    return 0;
}

