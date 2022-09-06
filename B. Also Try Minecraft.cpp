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
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
   for(int i=0;i<m;i++)
   {
    int s,t;
    cin>>s>>t;
    int sum = 0;
    if(s<t)
    {
        for(int j=s;j<t;j++)
        {
            if(a[j]>a[j+1])
            {
                sum = sum + (a[j]-a[j+1]);
            }
        }
        printi(sum);
    }
    else
    {
        for(int j=s;j>t;j--)
        { //printi(sum);
            if(a[j]>a[j-1])
            {
                sum = sum + (a[j]-a[j-1]);
               
            }
        }
        printi(sum);
    }
   }
  return 0;
 }