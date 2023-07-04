ll firstOccurrence(vector<ll> &arr, ll n, ll k) {
    ll low = 0, high = n - 1;
    ll first = -1;

    while (low <= high) {
        ll mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            first = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

ll lastOccurrence(vector<ll> &arr, ll n, ll k) {
    ll low = 0, high = n - 1;
    ll last = -1;

    while (low <= high) {
        ll mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            last = mid;
            //look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return last;
}
