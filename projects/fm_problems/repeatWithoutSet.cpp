#include<iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
            cout << a[i] << " ";
    }

}