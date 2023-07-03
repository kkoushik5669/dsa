void bubble_sort(vector<ll>arr ll n) {
    // Base Case: range == 1.
    if (n == 1) return;

    for (ll j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            ll temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    //Range reduced after recursion:
    bubble_sort(arr, n - 1);
}
