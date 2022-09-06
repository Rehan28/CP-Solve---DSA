
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

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s = 0;
        for(int i=0;i<n-2;i++)
        {
            int q = 0;
            int count = 0;
            for(int j=i+1;j<n-1;j++)
            {
                int g = 0;
                for(int k=j+1;k<n;k++)
                {
                    int sum = a[i] + a[j] + a[k];
                   for(int j=0;j<n;j++)
                     {
                        if(sum == a[j])
                         {
                           count++;
                            break;
                         }
                     }
                     if(count ==0)
                     {
                         break;
                     }
                     else
                     {
                         g++;
                     }
                }
                if(g==0)
                {
                   break;
                }
                else
                {
                   q++;
                }
            }


            if(count == 0)
            {
                s = 0;
                break;
            }
            else
            {
                s++;
            }
        }


        if(s==0)
        {
           cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
 }
