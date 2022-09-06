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
   int a[t];
   for(int i=0;i<t;i++)
   {
    cin>>a[i];
   }
   sort(a,a+t);
   int sum;
   for(int i=0;;i++)
   {
    if(binary_search(a,a+t,i))
    {
        continue;
    }
    else
    {
        sum = i;
        break;
    }
   }
   printi(sum);
  return 0;
 }