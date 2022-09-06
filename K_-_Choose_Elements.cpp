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
    int k;
    cin>>k;
    int a[t];
    int b[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        cin>>b[i];
    }
    int x = a[0];
    int c = 0;
    for(int i=1;i<t;i++)
    {
       if(abs(x-a[i])<=k)
       {
        x = a[i];
        c++;
       }
       else if(abs(x-b[i])<=k)
       {
        x = b[i];
        c++;
       }
      
       
    }
    int f=0;
    x = b[0];
    for(int i=1;i<t;i++)
    {
       if(abs(x-a[i])<=k)
       {
        x = a[i];
        f++;
       }
       else if(abs(x-b[i])<=k)
       {
        x = b[i];
        f++;
       }
      
       
    }
    if(c==t || f==t)
    {
        prints("Yes");
    }
    else
    {
        prints("No");
    }
  return 0;
 }