ll missingNumber(vector<ll>&a, ll N) {

    //Summation of first N numbers:
    ll sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    ll s2 = 0;
    for (ll i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    ll missingNum = sum - s2;
    return missingNum;
}
