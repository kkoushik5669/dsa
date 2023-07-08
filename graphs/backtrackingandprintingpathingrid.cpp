#include<bits/stdc++.h>
#define ll long long
using namespace std;ll vis[1001][1001];
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
	ll n,m;cin>>n>>m;
	string s[n];
	for(int i=0;i<n;i++){cin>>s[i];}
	queue<pair<pair<int,int>,int>>q;bool breaker=false;ll ans=0;
	char path[n][m];int si,sj;
	for(int i=0;i<n;i++){for(int j=0;j<m;j++){if(s[i][j]=='A'){q.push({{i,j},0});si=i;sj=j;break;}}}
int par[n][m];int ti;int tj;path[si][sj]='A';
int delrow[4]={-1,0,1,0};char delchar[4]={'U','R','D','L'};
		int delcol[4]={0,1,0,-1};
	while(!q.empty())
	{
		int x=q.front().first.first;
		int y=q.front().first.second;int dist=q.front().second;
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nrow=delrow[i]+x;
			int ncol=delcol[i]+y;
			if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && (s[nrow][ncol]=='.' || s[nrow][ncol]=='B') && vis[nrow][ncol]==0)
			{
				vis[nrow][ncol]=1;q.push({{nrow,ncol},dist+1});
				ans=dist+1;path[nrow][ncol]=delchar[i];par[nrow][ncol]=i;
				if(s[nrow][ncol]=='B'){breaker=true;ti=nrow,tj=ncol;break;}
			}
		}
		if(breaker){break;}
	}
	if(breaker){cout<<"YES"<<endl;cout<<ans<<endl;
	string t="";
	t+=path[ti][tj];
	while(!(ti==si && tj==sj))
	{
		int dd=par[ti][tj]^2;
		ti+=delrow[dd];
		tj+=delcol[dd];
		if(ti==si && tj==sj){break;}
		t+=path[ti][tj];
	}
	reverse(t.begin(),t.end());
	cout<<t<<endl;
	exit(0);
}
	cout<<"NO"<<endl;
	return 0;
}
