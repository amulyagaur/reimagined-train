#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
    	for(int j=0;j<=n;j++)
    	{
    		if(i==0 || j==0)
    			dp[i][j]=0;
    		else
    			if(j<i)
    			{
    				dp[i][j]=dp[i-1][j];
    			}
    			else
    				dp[i][j]=max(dp[i-1][j],arr[i-1]+dp[i][j-i]);
    	}
    }
    cout<<dp[n][n]<<endl;
    return 0;
}
