//check if there exists a subset whose sum is given
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
    	dp[i][0]=true;
    }
    for(int i=1;i<=sum;i++)
    {
    	dp[0][i]=false;
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=sum;j++)
    	{
    		if(a[i-1]<=j)
    		{
    			dp[i][j]= (dp[i-1][j] || dp[i-1][j-a[i-1]]);           //including that item
    		}
    		else
    			dp[i][j]=dp[i-1][j];                                   //excluding that item
    	}
    }
    if(dp[n][sum])
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}
