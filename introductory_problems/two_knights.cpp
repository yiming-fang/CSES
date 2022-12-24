#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, total, illegal;
    cin >> n;
    for (k = 1; k <= n; ++k) {
        total = (k * k) * (k * k - 1) / 2;
        illegal = 4 * (k - 1) * (k - 2);
        cout << total - illegal << endl;
    }
}
