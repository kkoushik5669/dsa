ll upperBound(vector<ll> &arr, ll x, ll n) {
     ll low = 0, high = n - 1;
    ll ans = n;

    while (low <= high) {
        ll mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}
