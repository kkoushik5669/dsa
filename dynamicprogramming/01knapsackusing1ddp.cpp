#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1000001];
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
	int n,m;cin>>n>>m;vector<int>pri;vector<int>pag;
	int x;
	for(int i=0;i<n;i++){cin>>x;pri.push_back(x);}
	for(int i=0;i<n;i++){cin>>x;pag.push_back(x);}
	for(int i=0;i<n;i++)
	{
		for(int j=m;j>=pri[i];j--)
		{
			dp[j]=max(dp[j],dp[j-pri[i]]+pag[i]);
		}
	}	
	cout<<dp[m]<<endl;
	return 0;
}
