#include <bits/stdc++.h>

using namespace std;

#define N 8

string board[N];
bool col[N], diag1[N * 2], diag2[N * 2];
long long ans = 0;

void setbit(int x, int y, bool val) {
    col[x] = diag1[x+y] = diag2[x+(N-1-y)] = val;
}

void search(int y) {
    if (y == N) {
        ans++;
        return;
    }
    for (int x = 0; x < N; ++x) {
        if (col[x] || diag1[x+y] || diag2[x+(N-1-y)] || board[x][y] == '*')
            continue;
        setbit(x, y, true);
        search(y + 1);
        setbit(x, y, false);
    }
}

int main() {
    for (int i = 0; i < N; i++)
        cin >> board[i];
    search(0);
    cout << ans << endl;
}
