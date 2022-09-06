
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
        long long    a[n],c[n];
        long long  b[n],d[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            c[i] = a[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
            d[i] = b[i];
        }
        sort(c,c+n);
        sort(d,d+n);
       // int s = *max_element(a,a+n);
        //cout<<s;

        long long  sum = 0;
        for(int i=0;i<n;i++)
        {
            long long  asum = a[i]-c[0];
            long long  bsum = b[i] - d[0];
            if(asum>bsum)
            {
               sum = sum + asum;
            }
            else{
                sum = sum + bsum;
            }
        }
        cout<<sum<<endl;


    }
}
