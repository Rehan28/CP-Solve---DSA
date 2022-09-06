
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 and b == 0 and c==0 and d == 0)
        {
            printi(0);
        }
        else if(a==1 and b == 1 and c==1 and d == 1)
        {
            printi(2);
        }
        else
        {
            printi(1);
        }
    }
  return 0;
 }
