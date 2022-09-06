
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int a[4];
    string x;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
     cin.ignore();
    getline(cin,x);

    //cout<<x<<endl;

    int sum = 0;

    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='1')
        {
            sum = sum + a[0];
        }
        else if(x[i]=='2')
        {
            sum = sum + a[1];
        }
        else if(x[i]=='3')
        {
            sum = sum + a[2];
        }
        else
        {
            sum = sum + a[3];
        }
    }
    cout<<sum<<endl;
 }
