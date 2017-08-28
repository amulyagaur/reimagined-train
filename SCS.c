#include <bits/stdc++.h>
using namespace std;
void lcs(string &x,string &y)
{
	int m=x.length(),n = y.length(),lcs_size;
	int a[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			a[i][j]=0;
			else
			if(x[i-1]==y[j-1])
			a[i][j]=1+a[i-1][j-1];
			else
			a[i][j]=max(a[i-1][j],a[i][j-1]);
		}
	}
	lcs_size=a[m][n];
	int i=m,j=n,k;
	string l="";
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
		{
			l.push_back(x[i-1]);
			i--;
			j--;
		}
		else
		if(a[i-1][j]>a[i][j-1])
		i--;
		else
		j--;
	}
	reverse(l.begin(),l.end());
	i=0,j=0,k=0;
	while(i<x.size() && j<y.size() && k<l.size())
	{
	  if(x[i]==l[k] && y[j]==l[k])
	  {
	    cout<<x[i];
	    i++;
	    j++;
	    k++;
	  }
	  else
	  if(x[i]==l[k] && y[j]!=l[k])
	  {
	    cout<<y[j];
	    j++;
	  }
	  else
	  if(x[i]!=l[k] && y[j]==l[k])
	  {
	    cout<<x[i];
	    i++;
	  }
	  else
	  {
	    cout<<x[i]<<y[j];
	    i++;
	    j++;
	  }
	}
	while(i<x.size())
	{
	  cout<<x[i];
	  i++;
	}
	while(j<y.size())
	{
	  cout<<y[j];
	  j++;
	} 
	cout<<endl;
	
}
int main()
{
	string x,y;
	while(cin>>x>>y)
	{
		lcs(x,y);
	}
	return 0;
}
