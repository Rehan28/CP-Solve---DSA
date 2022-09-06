#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
      int  n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int sum[n];
      for(int i=0;i<n;i++)
      {
           sum[i] = 0;

          for(int j=0;j<n;j++)
          {
              if(i==j)
              {
                  continue;
              }
              sum[i] = sum[i] ^ a[j];
              //cout<<sum[i];
          }
          if(sum[i] == a[i])
          {
              cout<<a[i]<<endl;
              break;
          }
      }
      //cout<<5;

    }
 }
