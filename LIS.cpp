#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    vector<int> lis(n,1);
    for(int i=1;i<n;i++)
    {
    	for(int j=0;j<i;j++)
    	{
    		if(a[i]>a[j] && lis[j]+1>lis[i])
    			lis[i]=lis[j]+1;
    	}
    }
    cout<<*max_element(lis.begin(),lis.end());
    return 0;
}
