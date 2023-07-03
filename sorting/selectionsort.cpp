void selection_sort(vector<ll>&arr, ll n) {
  // selection sort
  //main objective is it takes the minimum element in the vector
  //each time and sorts it from left
  for (ll i = 0; i < n - 1; i++) {
    ll mini = i;
    for (ll j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    ll temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}
