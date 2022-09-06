#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int n;
         cin>>n;
         int x[50];
         for(int j=0;j<n;j++)
         {
             cin>>x[j];
         }
         int sum = 0;


         if(x[0]%2==0)
         {
          for(int j=2;j<n;j+=2)
         {
             if(x[j]%2!=0)
             {
                 sum++;
                 break;
             }
         }
         }
         else
         {
        for(int j=2;j<n;j+=2)
         {
             if(x[j]%2==0)
             {
                 sum++;
                 break;
             }
         }
         }

         if(x[1]%2==0)
         {
          for(int j=1;j<n;j+=2)
         {
             if(sum >0)
             {
                 break;
             }
             if(x[j]%2!=0)
             {
                 sum++;
                 break;
             }
         }
         }
         else
         {
        for(int j=1;j<n;j+=2)
         {
             if(sum >0)
             {
                 break;
             }
             if(x[j]%2==0)
             {
                 sum++;
                 break;
             }
         }
         }
         if(sum>0)
         {
             cout<<"NO"<<endl;
         }
        else
        {
            cout<<"YES"<<endl;
        }
     }
}
