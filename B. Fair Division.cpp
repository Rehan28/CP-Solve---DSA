#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       int even = 0;
       int odd = 0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }

       }

       if(even == 0)
       {
           if(odd%2==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
              cout<<"NO"<<endl;
           }
       }
       else if(odd == 0)
       {
            if(even%2==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
              cout<<"NO"<<endl;
           }
       }
       else
       {

            if(odd%2==0&&even%2==0)
           {
               cout<<"YES"<<endl;
           }
           else if(odd%2==0&&even%2!=0)
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
