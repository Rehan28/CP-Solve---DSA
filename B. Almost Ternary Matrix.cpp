
#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
int main()
{
    muku28();
    int t;
    cin>>t;
   while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        //int b[n][m];
        a[0][0] = 1;
        int count = 3;  int r = 1;
        //int x = 0;
        for(int i=1;i<m;i++)
        {
            if(count>2)
            {


                 a[0][i] = 0;

                 if(r%2==0)
                 {
                      count = 0;
                 }
                 r++;
            }
            else
            {
                a[0][i] = 1;
               // x ++;
            }
            count++;

        }
        for(int i=0;i<m;i++)
        {
            if(a[0][i]==1)
            {
                a[1][i] = 0;
            }
            else
            {
                a[1][i] = 1;
            }
        }
        int x = n/2;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[0][j]<<" ";
            }
            cout<<"\n";
            for(int j=0;j<m;j++)
            {
                cout<<a[1][j]<<" ";
            }
            cout<<"\n";

        }

    }
  return 0;
 }
