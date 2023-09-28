//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:		
	
	char kthCharacter(int m, int n, int k)
	{
	   // string s;
    string result = bitset<32>(m).to_string();
    if(m!=0)result.erase(0, result.find_first_not_of('0'));
    else result="0";
	    for(int i=0;i<n;i++)
	    {
	        string s1="";
	        for(int j=0;j<result.length();j++)
	        {
	            if(result[j]=='0')
	            {
	                s1+="01";
	            }
	            else
	            {
	                s1+="10";
	            }
	        }
	        result=s1;
	    }
	    return result[k-1];
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
   		int m, n, k;
   		cin >> m >> n >> k;

   	
        Solution ob;
   		cout << ob.kthCharacter(m, n, k) << "\n";
   	}

    return 0;
}
// } Driver Code Ends