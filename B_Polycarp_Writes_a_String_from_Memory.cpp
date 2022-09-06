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
        string s;
        cin>>s;
        set<char> c;
        int count = 1;
        
        for(int i=0;i<s.size();i++)
        {
           c.insert(s[i]);
           if(c.size()>3)
           {
            count++;
            c.clear();
            i--;
           }
           
        }
        printi(count);
        
    }
  return 0;
 }