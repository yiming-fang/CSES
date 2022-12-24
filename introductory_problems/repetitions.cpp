#include <bits/stdc++.h>

using namespace std;

int main() {
    string seq;
    long long max_len = 1, cur_len = 1;
    cin >> seq;
    for (int i = 1; i < seq.size(); ++i) {
        cur_len = seq[i] == seq[i-1] ? cur_len + 1 : 1;
        max_len = max(max_len, cur_len);
    }
    cout << max_len << endl;
}
