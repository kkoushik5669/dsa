ll func(ll mid, ll n, ll m) {
    long long ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

ll NthRoot(ll n, ll m) {
    //Use Binary search on the answer space:
    ll low = 1, high = m;
    while (low <= high) {
      ll mid = (low + high) / 2;
        ll midN = func(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
