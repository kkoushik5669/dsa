void selection_sort(vector<int>&arr, int n) {
  // selection sort
  //main objective is it takes the minimum element in the vector
  //each time and sorts it from left
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}
