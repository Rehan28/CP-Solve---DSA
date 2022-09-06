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
   int b[m];
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
   }
    for(int i=0;i<m;i++)
   {
        cin>>b[i];
   }
   int c = 0;
   
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(a[j] == b[i])
        {
            a[j] = 0;
            break;
        }
        if(j==(n-1))
        {
            c++;
        }
    }
   }
   if(c==0)
   {
      prints("Yes");
   }
   else
   {
    prints("No");
   }
  return 0;
 }