

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[30],b[30];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);

        int sum = 0;
        int h = 0;
        int j = n-1;

        while(k--){
            if(a[h]<b[j])
            {
                swap(a[h],b[j]);
               // a[h]=b[j];

            }
            h++;
            j--;
        }
        for(int i=0;i<n;i++)
        {
             sum = sum + a[i];
        }
        cout<<sum<<endl;


    }
}
