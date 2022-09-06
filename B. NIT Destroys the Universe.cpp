#include<bits/stdc++.h>

using namespace std;

//muku28


long int a[1000000];
long int b[1000000];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int count = 0;
        int f = 0;
        int j =0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                b[j] = i;
                j++;
            }

        }
       // cout<<a.size();
         for(int i=0;i<j-1;i++)
        {
            if((b[i]-b[i+1])==-1)
            {
                continue;
            }
            else{
                count++;
            }
        }
        if(n == 1 && a[0]!=0)
         {
            cout<<"1"<<endl;
         }

       else if(j==1 && a[0]==0 && n!=1)
        {
            cout<<"1"<<endl;
        }
        else if(a[0]!=0 && n>1)
        {
            cout<<(count+1)<<endl;
        }
        else
        {
            cout<<count<<endl;
        }













       /* int i = 0;
        while(i<n)
        {

            if(a[i]==0 && i!=(n-1))
            {
                int j = 0;
                while(j<n-i)
                {
                   if(a[j]!=0)
                   {
                      break;
                   }
                   j++;
                }
                i = i + j;
                count++;
            }
            else{
                i++;
            }


        }
        for( i=0;i<n;i++)
        {
            if(a[i] == 0)
           {
               f++;
           }
        }
       if(f==n)
       {
           cout<<"0"<<endl;
       }

       else
       {

       }*/

    }
 }
