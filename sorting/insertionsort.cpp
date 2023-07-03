void insertion_sort(vector<ll>arr, ll n) {
    //sorts the array from left
    //first assumes the single element in the left is sorted.
    //then it procees right arranging each element sorted.
    for (ll i = 0; i <= n - 1; i++) {
        ll j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            ll temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
