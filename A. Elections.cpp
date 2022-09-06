#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        int b[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(a,a+3);
        if(a[0]==0&&a[2]==0&&a[1]==0)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else{
        if((a[2]-b[0])== 0)
        {
            cout<<0<<" ";
        }
        else
        {
          cout<<a[2]-b[0]+1<<" ";
        }

        if((a[2]-b[1])==0)
        {
            cout<<0<<" ";
        }
        else
        {
          cout<<a[2]-b[1]+1<<" ";
        }
        if((a[2] - b[2])==0)
        {
             cout<<0<<" ";
        }
        else
        {
          cout<<a[2] - b[2]+1<< " "<<endl;
        }
        }



    }
}
