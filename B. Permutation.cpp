
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
        int n;
        cin>>n;
         int a[n];
        printi(2);
        cout<<1<<" ";
        int x = 2;
        int c = 0;
        while(x<=n)
        {
             cout<<x<<" ";
             a[c] = x;
             c++;
             x = x*2;
        }
        int y = 3;
        while(y<=n)
        {
            x = y;
             while(x<=n)
            {
             cout<<x<<" ";
             a[c] = x;
             c++;
             x = x*2;
            }
            y = y+2;
        }


       //int b[n];

        cout<<"\n";
    }
  return 0;
 }
