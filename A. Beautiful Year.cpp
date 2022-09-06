
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;
    for(int i=t+1;;i++)
    {
         int  a1 = i%10;
        //cout<<a1<<endl;
        int x1 = i/10;
        int a2 = x1%10;
        int x2 = x1/10;
        int a3 = x2%10;
        int x3 = x2/10;
       // int a4 = x3%10;
        if((a1!=a2)&&(a1!=a3)&&(a1!=x3)&&(a2!=a3)&&(a2!=x3)&&(a3!=x3))
        {
            cout<<i<<endl;
            break;
        }
    }

 }
