#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N, n, i;
    cin >> N;
    bool nums[N];
    memset(nums, 0, N);
    for (i = 0; i < N - 1; ++i, cin >> n)
        nums[n - 1] = true;
    for (i = 0; i < N; ++i)
        if (!nums[i])
            cout << i + 1 << endl;
}
