#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,W;
    cin>>n>>W;
    int value[n],weight[n];
    for(int i=0;i<n;i++)
    {
    	cin>>weight[i]>>value[i];
    }
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
    	for(int j=0;j<=W;j++)
    	{
    		if(i==0 || j==0)
    		{
    			dp[i][j]=0;
    		}
    		else
    		{
    			if(weight[i-1]<=j)
    				dp[i][j]=max(value[i-1]+dp[i][j-weight[i-1]],dp[i-1][j]);
    			else
    				dp[i][j]=dp[i-1][j];
    		}
    	}
    }
    cout<<dp[n][W]<<endl;
    return 0;
}
