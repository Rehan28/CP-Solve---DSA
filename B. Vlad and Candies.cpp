#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i =0;i<t;i++)
   {
       int n;
       cin>>n;
       int high=0;
       int low =0;
       int arr[100000];
       for(int j=0;j<n;j++)
       {


           cin>>arr[j];
           if(j=0)
           {
              high = arr[j];
           }
           else{
            if(high<arr[j])
            {
                low = high;
                high = arr[j];
            }
            else{
                if(low<arr[j])
                {
                    low = arr[j];
                }
            }
           }
       }

  cout<<high;
  cout<<low;


       if(n==1)
       {
           if(arr[0]>1)
           {
             cout<<"NO\n";
           }
           else{
            cout<<"YES\n";
           }

       }
       else
       {   int sum;
           sum = high - low;
           if(sum>1)
           {
             cout<<"NO\n";
           }
           else
           {
               cout<<"YES\n";
           }
       }
   }
}
