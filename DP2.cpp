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
    int max_so_far=a[0];
    int max_here = a[0];
    for(int i=1;i<n;i++)
    {
    	max_here = max(a[i],max_here+a[i]);
    	max_so_far = max(max_so_far,max_here);
    }
    cout<<max_so_far<<endl;
    return 0;
}
