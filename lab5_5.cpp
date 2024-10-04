#include <iostream>
using namespace std;


int BC(int n, int k) {
    if (k == 0 || k == n) return 1;
    return BC(n - 1, k - 1) + BC(n - 1, k);
}


int FB(int n) {
    int sum = 0;

    for (int k = 0; k <= n / 2; ++k) {
        sum += BC(n - k, k);
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Fibonacci value F(" << n << ") using binomial formula: " << FB(n) << endl;
    return 0;
}
