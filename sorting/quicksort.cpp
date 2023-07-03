//This algorithm places each pivot in the right position
//In each step it make sures to put the elements left of pivot as less than pivot
// The elements right of pivot are greater than pivot
ll partition(vector<ll> &arr, ll low, ll high) {
    ll pivot = arr[low];
    ll i = low;
    ll j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<ll> &arr, ll low, ll high) {
    if (low < high) {
        ll pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}
