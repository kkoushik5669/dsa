long long smallestpositive(vector<long long> arr, ll n) {
   long long int res = 1; // Initialize result
  
   sort(arr.begin(), arr.end());
   // Traverse the array and increment 'res' if arr[i] is
   // smaller than or equal to 'res'.
   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];
  
   return res;
  }
