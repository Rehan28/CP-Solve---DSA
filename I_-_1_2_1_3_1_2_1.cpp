#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}
//muku28
int main()
{
    muku28();
    int t;
    cin>>t;
    int a[100000];
    int b[100000];
    int c ;
    int p;
    if(t==1)
    {
        printi(1);
    }
    else
    {
        int x = 0;
        a[0] = 1;
        for(int i=2;i<=t;i++)
        {
            c = x;
            x = 0;
           for(int j=0;j<=c;j++)
           {
            //cout<<a[j]<<" ";
            b[x] = a[j];
            x++;
           }
            //cout<<i<<" ";
            b[x] = i;
            x++;
         for(int j=0;j<=c;j++)
           {
            //cout<<a[j]<<" ";
            b[x] = a[j];
            x++;
           }
          // x--;
           for(int j=1;j<=x;j++)
           {
            a[j] = b[j];
            p = j;
           }

        }
        for(int i=0;i<p;i++)
        {
        cout<<a[i]<<" ";
        }
    }
    
  return 0;
 }