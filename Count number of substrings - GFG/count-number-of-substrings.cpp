//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  long long int countSubStrings(string str, int k) {

    int i = 0, j = 0, currCount = 0;
    int result = 0;

    // Array to store count of characters.
    vector<int>count(26, 0);

    while (j < str.size()) 
    {
        // Index for current character.
        int index = str[j] - 'a';

        // Increment count for the current character.
        count[index] += 1;

        if (count[index] == 1) 
        {
            currCount++;
        }

        // Decrement count and increase ith pointer.
        while (currCount > k) 
        {
            count[str[i] - 'a']--;
            if (count[str[i] - 'a'] == 0) 
            {
                currCount--;
            }

            i++;
        }

        // Total substrings.
        result += (j - i + 1);
        j++;
    }
    return result;
    // Calculating for at most k and at most k-1 distinct chars.
    
}
    long long int substrCount (string str, int k) {
    	long long int ans = countSubStrings(str, k) - countSubStrings(str, k - 1);

    return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends