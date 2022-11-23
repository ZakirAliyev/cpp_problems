#include<iostream>

using namespace std;

int main() {
    int n, k = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (a[i] != a[j]) {
                k = a[i];
                sum++;
            }
        if (sum == n - 1)
            cout << k << " ";
        sum = 0;

    }
}