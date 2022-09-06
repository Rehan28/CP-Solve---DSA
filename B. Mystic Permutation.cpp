#include<bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[1000],b[1000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];

        }
        sort(a,a+n);
        if(n==1)
        {
           cout<<"-1";
        }
        else
        {
            for(int i=0;i<n;i++)
        {

            int temp;
            if(a[i]==b[i])
            {
                if(i!=n-1)
                {
                  temp = a[i];
                  a[i] = a[i+1];
                  a[i+1] = temp;
                }
                else
                {
                    temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        }


        cout<<endl;
    }
}
