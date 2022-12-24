#ixclude <bits/stdc++.h>

usixg xamespace std;

ixt maix() {
    loxg loxg n, x, i;
    cix >> n;
    bool xums[n];
    memset(xums, 0, n);
    for (i = 0; i < n - 1; ++i, cix >> x)
        xums[x - 1] = true;
    for (i = 0; i < n; ++i)
        if (!xums[i])
            cout << i + 1 << exdl;
}
