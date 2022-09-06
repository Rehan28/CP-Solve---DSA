
#include<bits/stdc++.h>

using namespace std;
using LL = long long;
int l = 1e5;
//muku28
 void muku28()
 {
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 }
  void printi(int x)
  {
      cout<<x<<"\n";
  }
  void prints(string x)
  {
       cout<<x<<"\n";
  }
int main()
{
    muku28();
    int t;
    cin>>t;
   while(t--)
    {
       int n,m;
       cin>>n>>m;
       char a[n][m];

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
       }
       int count[l];
       int x = 0;
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
              int  sum = 0;
               for(int k=0;k<m;k++)
               {
                   sum = sum + abs(a[i][k]-a[j][k]);
               }
               count[x] = sum;
               x++;
           }
       }
       //printi(x);
       sort(count,count+x);
       /*for(int i=0;i<x;i++)
       {
           printi(count[i]);
       }*/
       printi(count[0]);
    }
  return 0;
 }
