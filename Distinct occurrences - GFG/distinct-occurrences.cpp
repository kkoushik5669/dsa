//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/
// #define ll long long 
#define mod 1000000007
class Solution
{
    public:
    int subsequenceCount(string S, string T)
    {
        
        int n=S.length();
        int m=T.length();
        if(m>n) return 0;
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        
        for(int i=0;i<=m;i++)
        {
            dp[i][0]=0;
        }
        for(int j=0;j<=n;j++)
        {
            dp[0][j]=1;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(T[i-1]==S[j-1])
                {
                    dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
                    dp[i][j]%=mod;
                }
                else
                {
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends