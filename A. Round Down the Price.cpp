
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
       int m;
       cin>>m;
       string s = to_string(m);
       int x = s.size();
       //cout<<x;
       x = x-1;
       int sum =m-pow(10,x);
       printi(sum);
    }
  return 0;
 }
