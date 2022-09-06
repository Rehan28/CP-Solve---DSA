
#include<bits/stdc++.h>


using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        muku28();
        int x;
        cin>>x;
        int a[x];
        for(int j=0;j<x;j++)
        {
            cin>>a[j];
        }
        sort(a,a+x);
       //printi(a[x-1]);
        int count = 1;
        int sum = 0;
        for(int j=0;j<x-1;j++)
        {
            if(a[j]==a[j+1])
            {
                count++;
                //printi(1);
            }
            else
            {
                count = 1;
            }

            if(count==3)
            {
                 sum = a[j];
                //printi(sum);
                break;
            }
        }
        if(sum == 0)
        {
            prints("-1");
        }
        else
        {
            printi(sum);
        }

    }
}
