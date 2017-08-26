#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
      cin>>n>>m;
      string x,y;
      cin>>x>>y;
      int dp[n+1][m+1];
      for(int i=0;i<=n;i++)
      {
      	for(int j=0;j<=m;j++)
      	{
      		if(i==0)
      			dp[i][j]=j;
      		else
      			if(j==0)
      				dp[i][j]=i;
      			else
      				if(x[i-1]==y[j-1])
      					dp[i][j]=dp[i-1][j-1];
      				else
      					dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
      	}
      }
      cout<<dp[n][m]<<endl;
    return 0;
}
