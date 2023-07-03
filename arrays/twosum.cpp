bool twoSum(ll n, vector<ll> &arr, ll target) {
    sort(arr.begin(), arr.end());
    ll left = 0, right = n - 1;
    while (left < right) {
        ll sum = arr[left] + arr[right];
        if (sum == target) {
            return true;
        }
        else if (sum < target) left++;
        else right--;
    }
    return false;
}
