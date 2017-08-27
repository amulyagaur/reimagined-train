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
    	int n,amount;
    	cin>>n>>amount;
    	int coin[n];
    	for(int i=0;i<n;i++)
    		cin>>coin[i];
    	int *dp = new int[amount+1];
    	for(int i=0;i<=amount;i++)
    		dp[i]=INT_MAX;
    	dp[0]=0;

    	for(int i=1;i<=amount;i++)
    	{
    		dp[i]=INT_MAX;
    		for(int j=0;j<n;j++)
    		{
    			if(coin[j]<=i)
    			{
    				int ans = dp[i-coin[j]];
    				if(ans!=INT_MAX)
    				dp[i]=min(ans+1,dp[i]);
    			}
    		}
    	}
    	if(dp[amount]!=INT_MAX)
    	cout<<dp[amount]<<endl;
    	else
    		cout<<"Impossible"<<endl ;
    }
    return 0;
}
