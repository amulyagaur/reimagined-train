#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      string x,y;
      cin>>x>>y;
      int dp[n+1][m+1];
      for(int i=0;i<=n;i++)
      {
      	for(int j=0;j<=m;j++)
      	{
      		if(i==0 || j==0)
      			dp[i][j]=0;
      		else
      			if(x[i-1]==y[j-1])
      				dp[i][j]=1+dp[i-1][j-1];
      			else
      				dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
      	}
      }
      cout<<dp[n][m]<<endl;
      int i=n,j=m;
      string lcs;
      while(i>0 && j>0)
      {
        if(x[i-1]==y[j-1])
        {
          lcs.push_back(x[i-1]);
          i--;
          j--;
        }
        else
          if(dp[i-1][j]>=dp[i][j-1])
            i--;
          else
            j--;
      }
      reverse(lcs.begin(),lcs.end());

      cout<<lcs<<endl;
    }
    return 0;
}
