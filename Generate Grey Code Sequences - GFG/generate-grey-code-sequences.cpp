//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution{
  public:
    vector <string> generateCode(int N)
    {
        if(N==0)
            return {"0"};
        if(N==1)
        {
            return {"0","1"};
        }
        vector<string>ans=generateCode(N-1);
        vector<string>finalans;
        for(int i=0;i<ans.size();i++)
        {
            finalans.push_back('0'+ans[i]);
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            finalans.push_back('1'+ans[i]);
        }
        return finalans;
    }
    
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends