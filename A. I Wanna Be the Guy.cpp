
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a[p];
    int c[200];
    int j = 0;
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
        c[j] = a[i];
        j++;
    }
    int q ;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    {
        cin>>b[i];
        c[j] = b[i];
        j++;
    }

    int t = p+q;
    sort(c,c+t);

    int x = 0;
    //int d[200];
    for(int i=0;i<t;i++)
    {
        if(c[i]!=c[i+1])
        {
            //d[x]=c[i];
            x++;
        }
    }
    /* for(int i=0;i<t;i++)
    {
        cout<<c[i] << " ";
    }
    cout<<x<< " "<<c[x]<<endl;*/

    if(x==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
 }
