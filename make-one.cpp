#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[20000001]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[1]=0;
    a[2]=1;
    a[3]=1;
    for(int i=4;i<=20000000;i++)
    {
    	if(i%2==0)
    	{
    		if(i%3==0)
    			a[i] = 1+min(a[i-1],min(a[i/2],a[i/3]));
    		else 
    			a[i]=1+ min(a[i-1],a[i/2]);
    	}
    	else
    	{
    		if(i%3==0)
    			a[i]=1+min(a[i-1],a[i/3]);
    		else
    			a[i]=1+a[i-1];
    	}
    }
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
      cout<<"Case "<<j<<": ";
      int n;
      cin>>n;
      cout<<a[n]<<endl;
    }
    return 0;
}
