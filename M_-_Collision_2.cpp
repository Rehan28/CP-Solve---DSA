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
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    
    string s;
    cin>>s;
    int c =0;
    for(int i=0;i<n-1;i++)
    {
        auto itr = lower_bound(b.begin(), b.end(), key) ;
        index = distance(b.begin(), itr);
       
            if(b[i]==b[j])
            {
                if(s[i]!=s[j])
                {
                   // printi(1);
                    if(a[i]<a[j] and s[i]=='R')
                    {
                        prints("Yes");
                        c++;
                        break;
                    }
                }
            }
        
        if(c>0)
        {
            break;
        }
    }
    if(c==0)
    {
        prints("No");
    }
  return 0;
 }