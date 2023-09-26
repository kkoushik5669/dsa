//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        int t=0;
        int p=0;int ans=0;
        while(t<n && p<n)
        {
            while(arr[p]!='P' && p<n)
            {
                p++;
            }
            while(arr[t]!='T' && t<n)
            {
                t++;
            }
            if(arr[p]!='P'){break;}
            if(arr[t]!='T'){break;}
            if(t-p>k)
            {
                int diff=t-p-k;
                p+=(diff);
            }
            else if(p-t>k)
            {
                // t++;
                int diff=p-t-k;
                t+=diff;
            }
            else
            {
                ans++;
                t++;p++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 


// } Driver Code Ends