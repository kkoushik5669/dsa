//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int n=s.size();
	    int mod=1e9+7;
		vector<long long> dp(n+1,0);
		dp[0]=1;
		unordered_map<char,int> mp;
		
		for(int i=1;i<=n;i++)
		{
		    dp[i]=((dp[i-1]%mod)*2)%mod;
		    
		    if(mp.find(s[i-1])!=mp.end())
		    {
		        dp[i]=(dp[i]-dp[mp[s[i-1]]]+mod)%mod;
		        dp[i]=dp[i]%mod;
		    }
		    mp[s[i-1]]=(i-1);
		    
		}
		return dp[n]%mod;
	    
	    
	    
	}
};


//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends