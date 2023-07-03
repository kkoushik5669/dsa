void bubble_sort(vector<ll>arr, ll n) {
    // bubble sort
    for (ll i = n - 1; i >= 0; i--) {
        ll didSwap = 0;
        for (ll j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                ll temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
}
