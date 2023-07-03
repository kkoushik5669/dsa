void insertion_sort(vector<int>arr, int n) {
    //sorts the array from left
    //first assumes the single element in the left is sorted.
    //then it procees right arranging each element sorted.
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
