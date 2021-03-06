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
    	long long sum,n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    cin>>sum;
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
    	dp[i][0]=1;
    }
    for(int j=1;j<=sum;j++)
    {
    	dp[0][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=sum;j++)
    	{
    		if(a[i-1]>j)
    			dp[i][j] = dp[i-1][j];
    		else
    		{
    			dp[i][j]= dp[i-1][j] + dp[i][j-a[i-1]];
    		}
    	}
    }
    cout<<dp[n][sum]<<endl;
    }
    return 0;
}
