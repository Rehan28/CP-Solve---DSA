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
     int b[t];
     for(int i=0;i<t;i++)
     {
        cin>>a[i];
     }
     int count = 0;
      for(int i=0;i<t;i++)
     {
        cin>>b[i];
        if(a[i] == b[i])
        {
            count++;
        }
    }
    
    int c = 0;
    for(int i=0;i<t;i++)
    {
       for(int j=0;j<t;j++)
       {
        if(a[i] == b[j])
        {
            c++;
            break;
        }
       }
    }
   
    printi(count);
    printi((c-count));

  return 0;
 }