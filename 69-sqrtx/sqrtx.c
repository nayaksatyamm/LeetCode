int mySqrt(int x) {
    if (x == 0 || x == 1)
        return x;

    int l = 1, r = x, m, res = 0;

    while (l <= r) {
        m = l + (r - l) / 2;

        if (m == x / m) {
            return m;
        }
        else if (m > x / m) {
            r = m - 1;
        }
        else {
            res = m;
            l = m + 1;
        }
    }
    return res;
}
