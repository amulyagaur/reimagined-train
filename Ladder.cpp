//taking steps of only 1 or 2 or 3, count no. of ways to reach nth step :)
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int ways(int n)
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	return ways(n-1)+ways(n-2)+ways(n-3);
}
int ways2(int n)
{
	int *dp = new int [n+1];
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	cout<<ways2(4)<<endl;
    return 0;
}
