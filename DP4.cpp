    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       
         	int n,m;
         	cin>>n;
         	
         	cin>>m;
         	int a[n][m];
         	for(int i=0;i<n;i++)
         	{
        		for(int j=0;j<m;j++)
        			cin>>a[i][j];
         	}		
        	int dp[n][m];
        	dp[0][0]=a[0][0];
        	for(int i=1;i<m;i++)
        	dp[0][i]=dp[0][i-1]+a[0][i];
        	for(int i=1;i<n;i++)
        	dp[i][0]=dp[i-1][0]+a[i][0];
        	for(int i=1;i<n;i++)
        	{
        		for(int j=1;j<m;j++)
        		{
        			dp[i][j]= a[i][j]+min(dp[i-1][j],dp[i][j-1]);
        		}
        	}
        	cout<<dp[n-1][m-1]<<endl; 	
        
        return 0;
    }
     
