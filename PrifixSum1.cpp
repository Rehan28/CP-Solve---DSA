
#include <bits/stdc++.h>
using namespace std;
const int N = 10e7+10;
int a[N];
int pfx[N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pfx[0] = a[0];
    for(int i=1;i<n;i++)
    {
        pfx[i] = pfx[i-1] + a[i];
    }
    vector<vector<int>> query
       = {{1,n},{2,n},{3,n}};
       for(int i=0;i<3;i++)
       {
           int l = query[i][0]; int r = query[i][1];
           if(l<1 ||r>n)
           {
               cout<<"Rehan";
           }
           else if(l==1)
           {
               cout<<pfx[r-1]<<endl;
           }
           else
           {
               cout<<pfx[r-1]-pfx[l-1]<<endl;
           }
       }


}
