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
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      	cin>>a[i];
      vector<int> l;
      l.push_back(a[0]);
      for(int i=1;i<n;i++)
      {
      	if(a[i]<l[0])
      		l[0]=a[i];
      	else
      		if(a[i]>l[l.size()-1])
      			l.push_back(a[i]);
      		else
      			l[lower_bound(l.begin(),l.end(),a[i])-l.begin()]=a[i];
      }
      cout<<l.size()<<endl;
    }
    return 0;
}
