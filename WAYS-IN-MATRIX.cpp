#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,p;
    cin>>m>>n>>p;
    long long a[m][n];
    memset(a,0LL,sizeof(a));
    while(p--)
    {
    	int x,y;
    	cin>>x>>y;
    	a[x-1][y-1]=-1;
    }
    if(a[0][0]==-1)
    	cout<<0<<endl;
    else
    {
    	for(int i=0;i<n;i++)
    		if(a[0][i]==-1)
    			break;
    		else
    			a[0][i]=1LL;
    	for(int i=0;i<m;i++)
    		if(a[i][0]==-1)
    			break;
    		else
    			a[i][0]=1LL;
    	for(int i=1;i<m;i++)
    	{
    		for(int j=1;j<n;j++)
    		{
    			if(a[i][j]!=-1)
    			{
    				if(a[i-1][j]>0)
    					a[i][j] = (a[i][j]%M + a[i-1][j]%M)%M;
					if(a[i][j-1]>0)
    					a[i][j] = (a[i][j]%M + a[i][j-1]%M)%M;
    			}
    			else
    				continue;
    		}
    	}
    	if(a[m-1][n-1]==-1)
    		cout<<0<<endl;
    	else
    		cout<<a[m-1][n-1]<<endl;
    }
    return 0;
}
