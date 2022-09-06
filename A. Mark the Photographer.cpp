
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
   while(t--)
    {
     int n,x;
     cin>>n>>x;
     int a[n];
     int b[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     //sort(a,a+n);
     int count = 0;
     for(int i=0;i<n;i++)
     {
         cin>>b[i];

    }
    //sort(b,b+n);
     for(int j=0;j<n;j++)
         {
           if(abs(b[j]-a[j])<x)
            {
              count++;
            }
         }

     printi(count);
     if(count == 0)
     {
         prints("YES");
     }
     else
        {
            prints("NO");
        }
    }
  return 0;
 }
