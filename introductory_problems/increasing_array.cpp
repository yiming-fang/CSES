#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, curr, last = 0, moves = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> curr;
        if (last > curr)
            moves += last - curr
        else
            last = curr;
    }
    cout << moves << endl;
}
