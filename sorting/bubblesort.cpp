void bubble_sort(vector<ll>arr, ll n) {
    // bubble sort
    //The heavier one goes to top in each iteration of i.
    //so basically sort the heavier element to right in each iteration.
    for (ll i = n - 1; i >= 0; i--) {
        for (ll j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                ll temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
