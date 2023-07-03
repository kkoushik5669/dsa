

ll majorityElement(vector<ll> v) {

    //size of the given array:
    ll n = v.size();
    ll cnt = 0; // count
    ll el; // Element

    //applying the algorithm:
    for (ll i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    ll cnt1 = 0;
    for (ll i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}
