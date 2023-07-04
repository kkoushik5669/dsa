ll floorSqrt(ll n) {
    ll low = 1, high = n;
    //Binary search on the answers:
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
}
