#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, y, pivot, diag;
    vector<long long> buf;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        diag = max(x, y);
        pivot = diag * (diag - 1) + 1;
        pivot += diag & 1 ? y - x : x - y;
        buf.push_back(pivot);
    }
    for (auto i: buf)
        cout << i << endl;
}
