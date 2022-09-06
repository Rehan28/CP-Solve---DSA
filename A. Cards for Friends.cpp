
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       int w , h,n;
       cin>>w>>h>>n;
       if(n==1)
       {
           cout<<"YES"<<endl;
       }

       else
       {
           int i =1;

          while(w%2==0)
          {
              w = w/2;
              i = i*2;
          }
          while(h%2==0)
          {
              h = h/2;
              i = i*2;
          }

          if(i>=n)
          {
            cout<<"YES"<<endl;
          }
          else
          {
             cout<<"NO"<<endl;
          }
       }
    }
 }
