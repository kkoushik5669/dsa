ll solve(ll n, ll key, vector < ll > & v) {
  ll res = -1;
  for (ll i = n - 1; i >= 0; i--) {
    if (v[i] == key) {
      res = i;
      break;
    }
  }
  return res;
}
